#pragma once
#include "Driver.h"
class TaxiDriver : public Driver
{
private:
	static char license_type;
	static TaxiDriver* p_instance;
	TaxiDriver() {}
public:
	static char get_license_type() {
		return license_type;
	}
	static void set_license_type(char lic_type) {
		license_type = lic_type;
	}
	static TaxiDriver* get_instance() {
		if (!p_instance) {
			p_instance = new TaxiDriver();
			p_instance->set_license_type('B');
		}
		return p_instance;
	}
};

