#include "pch.h"
#include "CombinedScheduler.h"

CombinedScheduler::CombinedScheduler(double startingFuel, int startingTime)
{

	periodic = PeriodicScheduler(startingFuel);
	diff = DifferableServer(startingFuel, 6);
	spor = SporadicServer(startingFuel, 6);
	curTime = startingTime;
}

void CombinedScheduler::Run(int curTime)
{

}