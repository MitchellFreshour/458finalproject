#pragma once
#ifndef H_TOTALCALC
#define H_TOTALCALC

#include "PeriodicTask.h"
#include <time.h>

class TotalCalc : PeriodicTask
{
public:
	TotalCalc(double fuelLevel);
	double Calculate(double fuelLevel) override;
private:
	time_t initTime;
};
#endif // !H_TOTALCALC