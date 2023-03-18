#pragma once
#include "TaxiBuilder.h"
#include "BusBuilder.h"
class TransportBuilder
{
public:
	TransportBuilder(){}

	BusBuilder createBus() {
		return BusBuilder();
	}
	TaxiBuilder createTaxi() {
		return TaxiBuilder();
	}
};

