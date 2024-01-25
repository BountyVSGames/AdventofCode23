#include "../Header/SecondDayResult.h"

SecondDayResult::SecondDayResult()
{
}

void SecondDayResult::RunAssignmentPart1()
{
	if (IsCombinationPossible("Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green"))
	{
		std::cout << "Combination is possible" << std::endl;
	}
	else
	{
		std::cout << "Combination is not possible" << std::endl;
	}
}

bool SecondDayResult::IsCombinationPossible(std::string input)
{
	std::vector<std::string> strings;
	std::vector<std::string> strings2;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ':') {
			input.erase(0, i + 2);

			i = 0;
		}
		else if (input[i] == ';')
		{
			strings.push_back(input.substr(0, i));

			input.erase(0, i + 2);
			i = 0;
		}
		else if ((i + 1) == input.size())
		{
			strings.push_back(input.substr(0, i + 1));
		}
	}

	for (int i = 0; i < strings.size(); i++)
	{
		for (int j = 0; j < strings[i].size(); j++)
		{
			if (strings[i][j] == ',')
			{
				strings2.push_back(strings[i].substr(0, j));
				strings[i].erase(0, j + 1);
				j = 0;
			}
			else if ((j + 1) == strings[i].size())
			{
				strings2.push_back(strings[i].substr(0, j + 1));
			}
		}

		for (int k = 0; k < strings2.size(); k++)
		{
			std::cout << strings2[k] << std::endl;

			if (strings2[k].find("blue"))
			{
				std::cout << "Blue cubes " << GetNumberFromString(strings2[k]) << std::endl;
			}
			else if (strings2[k].find("red"))
			{
				std::cout << "Red cubes " << GetNumberFromString(strings2[k]) << std::endl;
			}
			else if (strings2[k].find("green"))
			{
				std::cout << "Green cubes " << GetNumberFromString(strings2[k]) << std::endl;
			}
		}

		strings2.clear();
		std::cout << std::endl;
	}

	return true;
}

int SecondDayResult::GetNumberFromString(std::string line)
{
	int firstValue = 0;
	int secondValue = 0;

	for (int i = 0; i < line.length(); i++)
	{
		if (firstValue == 0 && isdigit(line.at(i)))
		{
			if (isdigit(line.at(i + 1)))
			{
				//'0' is char 48. '1' is char 49. So we subtract from it to convert the char number to a int.
				firstValue = (line[i] - '0') * 10;			}
			else
			{
				//'0' is char 48. '1' is char 49. So we subtract from it to convert the char number to a int.
				firstValue = (line[i] - '0');
			}
		}
		else if (isdigit(line.at(i)))
		{
			secondValue = line[i] - '0';
		}
	}

	return firstValue + secondValue;
}