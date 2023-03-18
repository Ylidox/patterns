#pragma once
#include "AbstractFactory.h"
#include "Bus.h"
#include "BusDriver.h"
class BusFactory
{
public:
	Bus create_transport() {
		return Bus();
	}
	BusDriver* create_driver() {
		return BusDriver::get_instance();
	}
	Passenger create_passenger() {
		return Passenger();
	}
};

