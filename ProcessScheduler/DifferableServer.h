#pragma once
#ifndef H_DIFFERABLESERVER
#define H_DIFFERABLESERVER

#include "AperiodicServer.h"
#include "MinuteCalc.h"
#include "LapCalc.h"

class DifferableServer
{
public:
	DifferableServer(double fuelLevel, int runTime);
	DifferableServer() = default;
	double SelectAndRun(double fuelLevel, int curTime);
	bool ShouldRun();

private:
	MinuteCalc minuteCalc;
	LapCalc lapCalc;
	int runTime;
};

#endif // !H_DIFFERABLESERVER
