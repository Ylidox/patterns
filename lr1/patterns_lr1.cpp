#include "BusDriver.h"
#include "TaxiDriver.h"
#include "Taxi.h"
#include "Bus.h"
#include "BusFactory.h"
#include "TaxiFactory.h"
#include <iostream>


int main()
{
    TaxiFactory tf;
    BusFactory bf;

    BusDriver* bd = bf.create_driver();    
    TaxiDriver* td = tf.create_driver();

    Bus bus = bf.create_transport();
    bus.board_driver(bd);
    bus.board_passenger(bf.create_passenger());
    bus.board_passenger(bf.create_passenger());

    std::cout << "Bus is ready: " << bus.is_ready() << std::endl;

    Taxi taxi = tf.create_transport();
    taxi.board_driver(td);
    taxi.board_passenger(tf.create_passenger());
    taxi.board_passenger(tf.create_passenger());
    taxi.board_passenger(tf.create_passenger());
    taxi.board_passenger(tf.create_passenger());

    taxi.board_passenger(tf.create_passenger());

    std::cout << "Taxi is ready: " << taxi.is_ready() << std::endl;

}