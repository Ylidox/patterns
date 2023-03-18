#pragma once
#include "Driver.h"
#include "Passenger.h"
class Transport
{
protected:
	int seat;
	int count_passenger;
	Driver* driver;
	Passenger* array_passenger;
public:
	Transport() {}
	virtual void board_driver(Driver* driver) = 0;
	virtual void board_passenger(Passenger passenger) = 0;
	bool is_ready() {
		if (count_passenger >= 1 && count_passenger <= seat && driver != nullptr) 
			return true;
		return false;
	}

};

