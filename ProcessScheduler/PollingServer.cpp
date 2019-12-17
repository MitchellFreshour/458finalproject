#include "pch.h"
#include "PollingServer.h"

PollingServer::PollingServer(double fuelLevel, int runTime, int readyTime)
{
	this->runTime = runTime;
	this->readyTime = readyTime;
	minuteCalc = MinuteCalc(fuelLevel, 2);
	lapCalc = LapCalc(fuelLevel, 2);
}

AperiodicTask PollingServer::SelectProcess()
{
	return minuteCalc;
}