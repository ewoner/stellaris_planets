#include <iostream>

#include <planet.hpp>
#include "./planet/districts/district.hpp"
#include "./planet/districts/districtfactory.hpp"

int main( void ) {
    std::cout << "Main running.....saving.!"  << std::endl;
    stellaris::Planet p;
    stellaris::District* d = stellaris::dF.cityFactory();
    bool saved = p.saveToFile("Data/test.planet");
    if ( saved ) {
        std::cout<< "..Planet saved. ..";
    }
    else {
        std::cout << " FAILD save. ..";
    }
    bool loaded = p.loadFromFile("Data/test1.planet");
    if ( loaded ) {
        std::cout<< "..Planet " << p.getName() + " " << p.getSlots() << " loaded. ..";
    }
    else {
        std::cout << " FAILD load. ..";
    }

    std::cout << "Done!" << std::endl;
    return 0;
}
