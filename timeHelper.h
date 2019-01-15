#pragma once
#include <chrono>
class time_span 
{
public:
	time_span();
	~time_span() {};

	time_span(const time_span &tm) = delete;
	time_span& operator=(const time_span &tm) = delete;

	void start();
	double stop(bool seconds_duration=true);
private:
	std::chrono::steady_clock::time_point tp;
};
