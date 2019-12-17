#pragma once
#ifndef H_POLLINGSERVER
#define H_POLLINGSERVER

#include "MinuteCalc.h"
#include "LapCalc.h"

class PollingServer
{
public:
	PollingServer(double fuelLevel, int runTime, int readyTime);
	AperiodicTask SelectProcess();

private:
	MinuteCalc minuteCalc;
	LapCalc lapCalc;
	int runTime;
	int readyTime;
};

#endif // !H_POLLINGSERVER
