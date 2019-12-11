#pragma once
#ifndef H_TOTALCALC
#define H_TOTALCALC

#include <time.h>

class TotalCalc
{
public:
	TotalCalc(double fuelLevel);
	double Calculate(double fuelLevel);
private:
	double initFuelLevel;
	time_t initTime;
};
#endif // !H_TOTALCALC