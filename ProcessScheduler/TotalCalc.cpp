
#include "pch.h"
#include "TotalCalc.h"

TotalCalc::TotalCalc(double fuelLevel) 
{
	initTime = time(NULL);
}

double TotalCalc::Calculate(double fuelLevel)
{
	double totalConsumed = this->fuelLevel - fuelLevel;
	time_t totalTime = difftime(time(NULL), initTime);
	return totalConsumed / totalTime;
}