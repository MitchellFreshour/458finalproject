#include "pch.h"
#include "PeriodicScheduler.h"

PeriodicScheduler::PeriodicScheduler(double fuelLevel)
{
	totalCalc = TotalCalc(fuelLevel, 4, 12);
	instantCalc = InstantCalc(15, 4, 12);
	count = 1;
}

double PeriodicScheduler::SelectAndRun(double fuelLevel)
{
	return instantCalc.Calculate(fuelLevel);
}