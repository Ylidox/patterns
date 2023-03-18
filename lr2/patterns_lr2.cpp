#include "TransportBuilder.h"
#include <iostream>

int main()
{
    TransportBuilder tb;
    Bus bus = tb.createBus()
        .createDriver()
        .addAdultPassangers(10)
        .addChildren(10)
        .addBeneficiaries(10)
        .get();
    std::cout << bus.is_ready() << std::endl;

    Taxi taxi = tb.createTaxi()
        .createDriver()
        .addAdultPassangers(1)
        .addChildren(1)
        .setChildSeat()
        .get();
    std::cout << taxi.is_ready() << std::endl;
}
