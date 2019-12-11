
#include "pch.h"
#include "LapCalc.h"

LapCalc::LapCalc(double fuelLevel)
{
	lastFuelLevel = fuelLevel;
}

double LapCalc::Calculate(double fuelLevel)
{
	return lastFuelLevel - fuelLevel;
}