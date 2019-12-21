#include "pch.h"
#include "FuelTank.h"

FuelTank::FuelTank(double startingFuel, int runTime, int readyTime)
{
	this->fuelLevel = fuelLevel;
	this->runTime = runTime;
	this->readyTime = 0;
	this->nextReadyTime = readyTime;
}

double FuelTank::getFuelLevel()
{
	return this->fuelLevel;
}

void FuelTank::Consume(double amount)
{
	this->fuelLevel -= amount;
}