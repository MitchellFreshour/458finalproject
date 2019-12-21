#include "pch.h"
#include "DifferableServer.h"

DifferableServer::DifferableServer(double fuelLevel, int runTime)
{
	this->runTime = runTime;
	minuteCalc = MinuteCalc(fuelLevel, 4);
	lapCalc = LapCalc(fuelLevel, 4);
}

double DifferableServer::SelectAndRun(double fuelLevel, int curTime)
{
	return 0.0;
}

bool DifferableServer::ShouldRun() 
{
	return false;
}