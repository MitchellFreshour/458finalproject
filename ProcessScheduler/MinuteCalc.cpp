
#include "pch.h"
#include "MinuteCalc.h"

MinuteCalc::MinuteCalc(double fuelLevel, int runTime)
{
	this->runTime = runTime;
	lastFuelLevel = fuelLevel;
	initTime = time(NULL);
}

double MinuteCalc::Calculate(double fuelLevel)
{
	double fuelConsumed = lastFuelLevel - fuelLevel;
	lastFuelLevel = fuelLevel;
	return fuelConsumed / 60;
}

time_t MinuteCalc::getInitTime()
{
	return initTime;
}