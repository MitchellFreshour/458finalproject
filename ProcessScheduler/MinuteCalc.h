#pragma once
#ifndef H_MINUTECALC
#define H_MINUTECALC

#include "AperiodicTask.h"
#include<time.h>

class MinuteCalc : public AperiodicTask
{

public:
	MinuteCalc(double fuelLevel);
	MinuteCalc() = default;
	double Calculate(double fuelLevel) override;
	time_t getInitTime();
protected:
	int runTime;
	int readyTime;
private:
	double lastFuelLevel;
	time_t initTime;
};
#endif // !H_MINUTECALC