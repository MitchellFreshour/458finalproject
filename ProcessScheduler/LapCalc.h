#pragma once
#ifndef H_LAPCALC
#define H_LAPCALC

class LapCalc
{
public:
	LapCalc(double fuelLevel);
	double Calculate(double fuelLevel);
private:
	double lastFuelLevel;
};

#endif // !H_LAPCALC
