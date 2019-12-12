#pragma once
#ifndef H_PERIODICTASK
#define H_PERIODICTASK

#include <iostream>

class PeriodicTask
{
public:
	PeriodicTask() = default;
	virtual double Calculate(double fuelLevel) { return fuelLevel; };
	double fuelLevel;
protected:
	int runTime;
	int readyTime;
};

#endif