#pragma once
#include "Driver.h"
#include "Bus.h"
class BusBuilder
{
public:
	Bus* bus;
	BusBuilder(){
		bus = new Bus();
	}
	BusBuilder createDriver() {
		bus->board_driver(Driver('C'));
		return *this;
	}
	BusBuilder addAdultPassangers(int count) {
		for (int i = 0; i < count; i++) {
			bus->board_passenger(Adult());
		}
		return *this;
	}
	BusBuilder addChildren(int count) {
		for (int i = 0; i < count; i++) {
			bus->board_passenger(Child());
		}
		return *this;
	}
	BusBuilder addBeneficiaries(int count) {
		for (int i = 0; i < count; i++) {
			bus->board_passenger(Beneficiary());
		}
		return *this;
	}
	Bus get() {
		return *bus;
	}
};

