#pragma once
#include "Transport.h"
class AbstractFactory
{
public:
	AbstractFactory() {}
	virtual Transport create_transport() = 0;
	virtual Driver* create_driver() = 0;
	virtual Passenger create_passenger() = 0;
};

