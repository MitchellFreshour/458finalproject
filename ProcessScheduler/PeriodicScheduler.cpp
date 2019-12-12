#include "pch.h"
#include "PeriodicScheduler.h"

PeriodicScheduler::PeriodicScheduler(double fuelLevel)
{
	totalCalc = TotalCalc(fuelLevel);
	instantCalc = InstantCalc(15, 2, 4);
}

PeriodicTask PeriodicScheduler::SelectProcess()
{
	return instantCalc;
}