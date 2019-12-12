#pragma once
#ifndef H_PERIODICSCHEDULER
#define H_PERIODICSCHEDULER

#include "InstantCalc.h"
#include "TotalCalc.h"

class PeriodicScheduler
{
public:
	PeriodicScheduler(double fuelLevel);
	PeriodicTask SelectProcess();

private:
	TotalCalc totalCalc;
	InstantCalc instantCalc;
};

#endif // !H_PERIODICSCHEDULER
