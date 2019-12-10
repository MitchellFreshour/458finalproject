#pragma once

#include <vector>

class ProcessScheduler
{
public:
	ProcessScheduler(int* pArr, int arrSize);

private:
	std::vector<int> vec;
};