// ProcessScheduler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ProcessScheduler.h"


int main()
{
	int 
	ProcessScheduler p = ProcessScheduler()
    return 0;
}

ProcessScheduler::ProcessScheduler(int  *pArr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		vec.push_back(pArr[i]);
	}
}
