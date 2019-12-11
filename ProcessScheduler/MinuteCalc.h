#pragma once
#ifndef H_MINUTECALC
#define H_MINUTECALC

#include<time.h>

class MinuteCalc
{

public:
	MinuteCalc(double fuelLevel);
	double Calculate(double fuelLevel);
	time_t getInitTime();

private:
	double lastFuelLevel;
	time_t initTime;
};
#endif // !H_MINUTECALC