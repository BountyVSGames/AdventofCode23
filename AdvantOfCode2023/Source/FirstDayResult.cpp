#include "../Header/FirstDayResult.h"

FirstDayResult::FirstDayResult()
{
    m_totalValue = 0;
}

void FirstDayResult::RunAssignment()
{
    std::string line;
    std::ifstream myfile("CalibrationDocumentDay1.txt");

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            m_totalValue += GetCalibrationValue(line);
        }

        myfile.close();
    }
    else
    {
        std::cout << "Unable to open file";
    }

    std::cout << m_totalValue << std::endl;
}
int FirstDayResult::GetCalibrationValue(std::string line)
{
    int firstValue = 0;
    int secondValue = 0;

	for (int i = 0; i < line.length(); i++)
    {
	    if (firstValue == 0 && isdigit(line.at(i)))
	    {
		    //'0' is char 48. '1' is char 49. So we subtract from it to convert the char number to a int.
		    firstValue = (line[i] - '0') * 10;
		    secondValue = line[i] - '0';
	    }
	    else if (isdigit(line.at(i)))
	    {
		    secondValue = line[i] - '0';
	    }
    }

    return firstValue + secondValue;
}