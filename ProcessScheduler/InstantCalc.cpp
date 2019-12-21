
#include "pch.h"
#include "InstantCalc.h"
#include <iomanip>


InstantCalc::InstantCalc(double fuelLevel, int runTime, int readyTime)
{
	this->fuelLevel = fuelLevel;
	this->runTime = runTime;
	this->readyTime = readyTime;
	this->nextReadyTime = 0;
	fuelConsumed = 0;
	startTime = clock();
}

double InstantCalc::Calculate(double fuelLevel)
{
	endTime = clock();
	double elapsedTime = ((endTime - startTime) / CLOCKS_PER_SEC) + ((endTime - startTime) % CLOCKS_PER_SEC);
	std::cout << "INSTANT CALC" << std::endl;
	std::cout << "Start Clock: " << startTime << std::endl;
	std::cout << "End Clock: " << endTime << std::endl;
	std::cout << std::setprecision(9) << "Elapsed Time: " << elapsedTime << std::endl;
	fuelConsumed = this->fuelLevel - fuelLevel;
	std::cout << std::setprecision(9) << "Average: " << fuelConsumed/elapsedTime << std::endl;
	this->fuelLevel = fuelLevel;
	Completed();
	startTime = clock();
	return fuelConsumed/elapsedTime;
}

bool InstantCalc::isReady(int curTime)
{
	if (this->nextReadyTime >= curTime)
	{
		return true;
	}
	else
	{
		return false;
	}
}