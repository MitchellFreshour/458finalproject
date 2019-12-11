
#include "pch.h"
#include "TotalCalc.h"

TotalCalc::TotalCalc(double fuelLevel) 
{
	initFuelLevel = fuelLevel;
	initTime = time(NULL);
}

double TotalCalc::Calculate(double fuelLevel)
{
	double totalConsumed = initFuelLevel - fuelLevel;
	time_t totalTime = difftime(time(NULL), initTime);
	return totalConsumed / totalTime;
}