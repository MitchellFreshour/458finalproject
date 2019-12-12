#include "pch.h"
#include "FuelTank.h"

FuelTank::FuelTank(double fuelLevel)
{
	this->fuelLevel = fuelLevel;
}

double FuelTank::getFuelLevel()
{
	return fuelLevel;
}