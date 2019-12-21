#pragma once
#ifndef H_APERIODICSERVER
#define H_APERIODICSERVER

#include "DifferableServer.h"
#include "SporadicServer.h"

class AperiodicServer
{
public:
	AperiodicServer() = default;
	double SelectAndRun(double fuelLevel, int curTime);
	bool ShouldRun();

private:
	int runTime;
	int readyTime;
};

#endif // !H_APERIODICSERVER
