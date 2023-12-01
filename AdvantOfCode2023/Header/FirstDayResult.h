#pragma once
#include <iostream>
#include <fstream>
#include <string>

class FirstDayResult
{
public:
	FirstDayResult();

	void RunAssignment();
private:
	int GetCalibrationValue(std::string line);

	std::ifstream m_lineToRead;
	std::ifstream m_fileToRead;

	int m_totalValue;
};

