#include "pch.h"
#include "PeriodicScheduler.h"
#include "PeriodicTask.h"

PeriodicScheduler::PeriodicScheduler(double fuelLevel)
{
	totalCalc = TotalCalc(fuelLevel, 10, 25);
	instantCalc = InstantCalc(fuelLevel, 5, 10);
}

double PeriodicScheduler::SelectAndRun(double fuelLevel, int curTime)
{
	bool totalReady = totalCalc.isReady(curTime);
	bool instantReady = instantCalc.isReady(curTime);

	if (totalReady && instantReady) 
	{
		return instantCalc.Calculate(fuelLevel);
	}
	else if (totalReady)
	{
		return totalCalc.Calculate(fuelLevel);
	}
	else if (instantReady)
	{
		return instantCalc.Calculate(fuelLevel);
	}
	else
	{
		return -1;
	}
}