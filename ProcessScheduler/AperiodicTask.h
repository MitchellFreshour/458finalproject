#pragma once
#ifndef H_APERIDOCTASK
#define H_APERIDOCTASK

class AperiodicTask
{
public:
	AperiodicTask() = default;
	virtual double Calculate(double fuelLevel) = 0;
	double fuelLevel;
protected:
	int runTime;
	int readyTime;
};

#endif // !H_APERIDOCTASK
