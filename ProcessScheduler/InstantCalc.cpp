
#include "pch.h"
#include "InstantCalc.h"


InstantCalc::InstantCalc(double fuelLevel)
{
	lastFuelLevel = fuelLevel;
	fuelConsumed = 0;
	time_t lastCalcTime = time(NULL);
}

double InstantCalc::Calculate(double fuelLevel)
{
	endTime = clock();
	double elapsedTime = (endTime - startTime) * CLOCKS_PER_SEC;
	fuelConsumed = lastFuelLevel - fuelLevel;
	lastFuelLevel = fuelLevel;
	startTime = clock();
	return fuelConsumed/elapsedTime;
}