
#include "pch.h"
#include "TotalCalc.h"
#include <iomanip>

TotalCalc::TotalCalc(double fuelLevel, int runTime, int readyTime) 
{
	this->runTime = runTime;
	this->readyTime = readyTime;
	this->fuelLevel = fuelLevel;
	initTime = clock();
}

double TotalCalc::Calculate(double fuelLevel)
{
	double totalConsumed = this->fuelLevel - fuelLevel;
	clock_t curTime = clock();
	double totalTime = (curTime - initTime) / CLOCKS_PER_SEC;
	std::cout << "TOTAL CALC: init:" << initTime << " curtime: " << curTime << std::endl;
	std::cout << std::setprecision(9) << "Total Time: " << totalTime << std::endl;
	std::cout << std::setprecision(9) << "Average:" << totalConsumed / totalTime << std::endl;
	return totalConsumed / totalTime;
}