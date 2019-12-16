#pragma once
#ifndef H_PERIODICTASK
#define H_PERIODICTASK

#include <iostream>

class PeriodicTask
{
public:
	PeriodicTask() = default;
	virtual double Calculate(double fuelLevel) = 0;
	void Completed() {nextReadyTime = nextReadyTime + readyTime;};
	double fuelLevel;
protected:
	int runTime;
	int readyTime;
	int nextReadyTime;
};

#endif