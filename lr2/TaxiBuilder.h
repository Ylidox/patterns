#pragma once
#include "Driver.h"
#include "Taxi.h"
class TaxiBuilder
{
public:
	Taxi* taxi;
	TaxiBuilder() {
		taxi = new Taxi();
	}
	TaxiBuilder createDriver() {
		taxi->board_driver(Driver('B'));
		return *this;
	}
	TaxiBuilder addAdultPassangers(int count) {
		for (int i = 0; i < count; i++) {
			taxi->board_passenger(Adult());
		}
		return *this;
	}
	TaxiBuilder addChildren(int count) {
		for (int i = 0; i < count; i++) {
			taxi->board_child(Child());
		}
		return *this;
	}
	TaxiBuilder setChildSeat() {
		taxi->set_child_seat();
		return *this;
	}
	TaxiBuilder resetChildSeat() {
		taxi->reset_child_seat();
		return *this;
	}
	Taxi get() {
		return *taxi;
	}
};

