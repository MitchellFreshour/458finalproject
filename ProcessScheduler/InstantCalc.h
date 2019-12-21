#pragma once
#ifndef H_INSTANTCALC
#define H_INSTANTCALC

#include"PeriodicTask.h"
#include <time.h>

class InstantCalc : public PeriodicTask 
{

public:
	InstantCalc(double fuelLevel, int runTime, int readyTime);
	InstantCalc() = default;
	double Calculate(double fuelLevel) override;
	bool isReady(int curTime);
private:
	double fuelConsumed;
	clock_t startTime;
	clock_t endTime;
	
};

#endif // !H_INSTANTCALC
