#include "pch.h"
#include "SporadicServer.h"

SporadicServer::SporadicServer(double fuelLevel, int runTime)
{
	this->runTime = runTime;
	minuteCalc = MinuteCalc(fuelLevel, 2);
	lapCalc = LapCalc(fuelLevel, 2);
}

double SporadicServer::SelectAndRun(double fuelLevel, int curTime)
{
	return 0.0;
}

bool SporadicServer::ShouldRun()
{
	return false;
}