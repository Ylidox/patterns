#pragma once
#include <iostream>
#include "Transport.h"
class Bus : public Transport
{
public:
	Bus() {
		this->seat = 30;
		this->count_passenger = 0;
		this->array_passenger = new Passenger[this->seat];
	}
	void board_driver(Driver* driver) {
		this->driver = driver;
	}
	void board_passenger(Passenger passenger) {
		if (count_passenger < seat) {
			array_passenger[count_passenger] = passenger;
			count_passenger++;
			return;
		}
		std::cout << "Bus: not have free seats" << std::endl;
	}
	~Bus() {
		delete[] this->array_passenger;
	}
};
