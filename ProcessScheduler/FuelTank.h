#pragma once
#ifndef H_FUELTANK
#define H_FUELTANK

#include "PeriodicTask.h"

class FuelTank 
{
public:
	FuelTank(double startingFuel, int runTime, int readyTime);
	FuelTank() = default;
	double getFuelLevel();
	void Consume(double amount);
private:
	double fuelLevel;
	int runTime;
	int readyTime;
	int nextReadyTime;
};

#endif