// AdvantOfCode2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header/FirstDayResult.h"

int main()
{
	FirstDayResult* firstDayResult = new FirstDayResult();
	firstDayResult->RunAssignment();

	delete firstDayResult;
 //   std::string firstExample = "labc2";
	//int firstValue = 0;
	//int secondValue = 0;

	//for (int i = 0; i < firstExample.length(); i++)
	//{
	//	if (firstValue == 0 && isdigit(firstExample.at(i)))
	//	{
	//		std::cout << firstExample[i] << std::endl;

	//		//'0' is char 48. '1' is char 49. So we subtract from it to convert the char number to a int.
	//		firstValue = firstExample[i] - '0';
	//		secondValue = firstExample[i] - '0';
	//	}
	//	else if (isdigit(firstExample.at(i)))
	//	{
	//		std::cout << firstExample[i] << std::endl;
	//		secondValue = firstExample[i] - '0';
	//	}
	//}

	//std::cout << firstValue << secondValue << std::endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
