#pragma once
#ifndef H_LAPCALC
#define H_LAPCALC

class LapCalc
{
public:
	LapCalc(double fuelLevel);
	double Calculate(double fuelLevel);
protected:
	int runTime;
	int readyTime;
private:
	double lastFuelLevel;
};

#endif // !H_LAPCALC
