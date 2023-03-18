#pragma once
#include "AbstractFactory.h"
#include "Taxi.h"
#include "TaxiDriver.h"
class TaxiFactory
{
public:
	Taxi create_transport() {
		return Taxi();
	}
	TaxiDriver* create_driver() {
		return TaxiDriver::get_instance();
	}
	Passenger create_passenger() {
		return Passenger();
	}
};

