#pragma once
#ifndef H_INSTANTCALC
#define H_INSTANTCALC

#include <time.h>

class InstantCalc
{

public:
	InstantCalc(double fuelLevel);
	double Calculate(double fuelLevel);
private:
	double lastFuelLevel;
	double fuelConsumed;
	clock_t startTime;
	clock_t endTime;
	
};

#endif // !H_INSTANTCALC
