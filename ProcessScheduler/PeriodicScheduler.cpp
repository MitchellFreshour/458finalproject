#include "pch.h"
#include "PeriodicScheduler.h"

PeriodicScheduler::PeriodicScheduler(double fuelLevel)
{
	totalCalc = TotalCalc(fuelLevel, 3, 10);
	instantCalc = InstantCalc(fuelLevel, 3, 5);
}

double PeriodicScheduler::SelectAndRun(double fuelLevel, int curTime)
{
	bool totalReady = totalCalc.isReady(curTime);
	bool instantReady = instantCalc.isReady(curTime);

	if (totalReady && instantReady) 
	{

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
		return 0.0;
	}
}