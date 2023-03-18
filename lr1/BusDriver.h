#pragma once
#include "Driver.h"
class BusDriver : public Driver
{
private:
	static char license_type;
	static BusDriver* p_instance;
	BusDriver() {}
public:
	static char get_license_type() {
		return license_type;
	}
	static void set_license_type(char lic_type) {
		license_type = lic_type;
	}
	static BusDriver* get_instance() {
		if (!p_instance) {
			p_instance = new BusDriver();
			p_instance->set_license_type('C');
		}
		return p_instance;
	}
};

