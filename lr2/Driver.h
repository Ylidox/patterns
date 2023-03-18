#pragma once
class Driver
{
private:
	char license_type;
public:
	Driver(){}
	Driver(char license_type) : license_type(license_type) {}
	char get_license_type() {
		return license_type;
	}
	void set_license_type(char license_type) {
		this->license_type = license_type;
	}
};

