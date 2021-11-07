#include <iostream>

#include "./planet/planet.hpp"

int main( void ) {
    std::cout << "Main running.....saving.!"  << std::endl;
    stellaris::Planet p;
    bool saved = p.saveToFile("test.planet");
    if ( saved ) {
        std::cout<< "..Planet saved. ..";
    }
    else {
        std::cout << " FAILD save. ..";
    }
    bool loaded = p.loadFromFile("test1.planet");
    if ( loaded ) {
        std::cout<< "..Planet " << p.getName() + " " << p.getSlots() << " loaded. ..";
    }
    else {
        std::cout << " FAILD load. ..";
    }

    std::cout << "Done!" << std::endl;
    return 0;
}
