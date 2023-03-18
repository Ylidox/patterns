#pragma once
#include "Passenger.h"
#include "Driver.h"
class Transport
{
public:
	Driver driver;
	Passenger* array_passenger;
	int count_passenger;
	int seat;
	Transport(){}
	bool is_ready() {
		return false;
	}
};

