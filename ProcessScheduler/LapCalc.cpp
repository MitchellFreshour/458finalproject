
#include "pch.h"
#include "LapCalc.h"

LapCalc::LapCalc(double fuelLevel, int runTime)
{
	this->runTime = runTime;
	lastFuelLevel = fuelLevel;
}

double LapCalc::Calculate(double fuelLevel)
{
	double fuelConsumed = lastFuelLevel - fuelLevel;
	lastFuelLevel = fuelLevel;
	return fuelConsumed;
}