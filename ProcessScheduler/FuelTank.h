#pragma once
#ifndef H_FUELTANK
#define H_FUELTANK

class FuelTank {
public:
	FuelTank(double startingFuel);
	double getFuelLevel();
private:
	double fuelLevel;
};

#endif