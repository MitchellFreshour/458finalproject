#pragma once
#ifndef H_LAPCALC
#define H_LAPCALC

#include "AperiodicTask.h"

class LapCalc : public AperiodicTask
{
public:
	LapCalc(double fuelLevel, int runTime);
	LapCalc() = default;
	double Calculate(double fuelLevel) override;
protected:
	int runTime;
private:
	double lastFuelLevel;
};

#endif // !H_LAPCALC
