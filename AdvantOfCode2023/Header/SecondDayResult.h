#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class SecondDayResult
{
public:
	SecondDayResult();

	void RunAssignmentPart1();
private:
	bool IsCombinationPossible(std::string input);
	int GetNumberFromString(std::string line);

	int m_totalOfID;
};