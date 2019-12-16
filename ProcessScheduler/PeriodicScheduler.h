#pragma once
#ifndef H_PERIODICSCHEDULER
#define H_PERIODICSCHEDULER

#include "InstantCalc.h"
#include "TotalCalc.h"

class PeriodicScheduler
{
public:
	PeriodicScheduler(double fuelLevel);
	double SelectAndRun(double fuelLevel);

private:
	TotalCalc totalCalc;
	InstantCalc instantCalc;
	int count;
};

#endif // !H_PERIODICSCHEDULER
