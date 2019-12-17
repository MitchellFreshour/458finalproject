#pragma once
#ifndef H_DIFFERABLESERVER
#define H_DIFFERABLESERVER

#include "MinuteCalc.h"
#include "LapCalc.h"

class DifferableServer
{
public:
	DifferableServer(double fuelLevel, int runTime, int readyTime);
	AperiodicTask SelectProcess();

private:
	MinuteCalc minuteCalc;
	LapCalc lapCalc;
	int runTime;
	int readyTime;
};

#endif // !H_DIFFERABLESERVER
