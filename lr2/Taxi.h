#pragma once
#include <iostream>
#include "Transport.h"

class Taxi : public Transport
{
public:
	bool child_in_car;
	bool child_seat;
	Taxi() {
		this->seat = 4;
		this->count_passenger = 0;
		this->array_passenger = new Passenger[this->seat];
		this->child_in_car = false;
		this->child_seat = false;
	}
	void board_driver(Driver driver) {
		this->driver = driver;
	}
	void set_child_seat() {
		child_seat = true;
	}
	void reset_child_seat() {
		child_seat = false;
	}
	void board_child(Child passenger) {
		if (count_passenger < seat) {
			array_passenger[count_passenger] = passenger;
			count_passenger++;
			this->child_in_car = true;
			return;
		}
		std::cout << "Taxi: not have free seats" << std::endl;
	}
	void board_passenger(Passenger passenger) {
		if (count_passenger < seat) {
			array_passenger[count_passenger] = passenger;
			count_passenger++;
			return;
		}
		std::cout << "Taxi: not have free seats" << std::endl;
	}
	bool is_ready() {
		if (!(!child_in_car || child_seat)) return false;
		if (count_passenger >= 1 && count_passenger <= seat && driver.get_license_type() == 'B')
			return true;
		return false;
	}
	~Taxi() {
		delete[] this->array_passenger;
	}
};
