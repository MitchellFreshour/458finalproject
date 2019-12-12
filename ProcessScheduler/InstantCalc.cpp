
#include "pch.h"
#include "InstantCalc.h"


InstantCalc::InstantCalc(double fuelLevel, int runTime, int readyTime)
{
	this->fuelLevel = fuelLevel;
	this->runTime = runTime;
	this->readyTime = readyTime;
	fuelConsumed = 0;
	time_t lastCalcTime = time(NULL);
}

double InstantCalc::Calculate(double fuelLevel)
{
	endTime = clock();
	double elapsedTime = (endTime - startTime) * CLOCKS_PER_SEC;
	fuelConsumed = this->fuelLevel - fuelLevel;
	this->fuelLevel = fuelLevel;
	startTime = clock();
	return fuelConsumed/elapsedTime;
}