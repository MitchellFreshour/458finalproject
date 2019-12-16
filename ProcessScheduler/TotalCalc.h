#pragma once
#ifndef H_TOTALCALC
#define H_TOTALCALC

#include "PeriodicTask.h"
#include <time.h>

class TotalCalc : PeriodicTask
{
public:
	TotalCalc(double fuelLevel, int runTime, int readyTime);
	TotalCalc() = default;
	double Calculate(double fuelLevel) override;
private:
	clock_t initTime;
};
#endif // !H_TOTALCALC