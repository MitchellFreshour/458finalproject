#include "pch.h"
#include "DifferableServer.h"

DifferableServer::DifferableServer(double fuelLevel, int runTime, int readyTime)
{
	this->runTime = runTime;
	this->readyTime = readyTime;
	minuteCalc = MinuteCalc(fuelLevel, 2);
	lapCalc = LapCalc(fuelLevel, 2);
}

AperiodicTask DifferableServer::SelectProcess()
{
	return lapCalc;
}