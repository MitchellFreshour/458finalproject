#pragma once
#ifndef H_COMBINEDSCHEDULER
#define H_COMBINEDSCHEDULER

#include "pch.h"
#include "PeriodicScheduler.h"
#include "DifferableServer.h"
#include "SporadicServer.h"
#include "FuelTank.h"


class CombinedScheduler
{
public:
	CombinedScheduler(double startingFuel, int startingTime);
	CombinedScheduler() = default;
	void Run(int curTime);
private:
	int curTime;
	FuelTank tank;
	PeriodicScheduler periodic;
	DifferableServer diff;
	SporadicServer spor;
};
#endif // !H_COMBINEDSCHEDULER