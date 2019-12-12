#pragma once
#ifndef H_INSTANTCALC
#define H_INSTANTCALC

#include"PeriodicTask.h"
#include <time.h>

class InstantCalc : public PeriodicTask 
{

public:
	InstantCalc(double fuelLevel, int runTime, int readyTime) = default;
	double Calculate(double fuelLevel) override;
	InstantCalc operator=(const InstantCalc other);
private:
	double fuelConsumed;
	clock_t startTime;
	clock_t endTime;
	
};

#endif // !H_INSTANTCALC
