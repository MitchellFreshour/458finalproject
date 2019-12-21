#pragma once
#ifndef H_SPORADICSERVER
#define H_SPORADICSERVER

#include "AperiodicServer.h"
#include "MinuteCalc.h"
#include "LapCalc.h"

class SporadicServer
{
public:
	SporadicServer(double fuelLevel, int runTime);
	SporadicServer() = default;
	double SelectAndRun(double fuelLevel, int curTime);
	bool ShouldRun();

private:
	MinuteCalc minuteCalc;
	LapCalc lapCalc;
	int runTime;
};

#endif // !H_SPORADICSERVER
