#include "timeHelper.h"
using std::chrono::steady_clock;
using namespace std::chrono;


time_span::time_span()
{
	start();
}

void time_span::start()
{
	tp = steady_clock::now();
}

double time_span::stop(bool seconds_duration)
{
	if (seconds_duration)
	{
		return duration_cast<duration<double>>(steady_clock::now()-tp).count();
	}

	return duration_cast<duration<double,std::milli>>(steady_clock::now() - tp).count();
}

