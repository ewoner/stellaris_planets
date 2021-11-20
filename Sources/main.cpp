#include <iostream>

#include "utilities/menu.hpp"

#include "planet/planet.hpp"
#include "planet/districts/district.hpp"
#include "planet/districts/districttypedefs.hpp"

using namespace stellaris;


void displayDistricts( Planet p );

int main( void ) {

    Planet p;
    while ( true ) {
        displayDistricts( p );
        int result = displayMenu( {"Add City", "Add Factory", "Add Mine", "Add Farm" }, true );
        if ( result == 0 ) {
            break;
        }
    }

    return 0;
}

void displayDistricts( Planet p ) {
    int farms = 0;
    int mines = 0;
    int industrial = 0;
    int city = 0;

    for ( District d : *( p.getDistricts() ) ) {
        switch ( d.getType() ) {
            case District_Types::agriculture:
                farms ++; break;
            case District_Types::city:
                city ++; break;
            case District_Types::industrial:
                industrial ++; break;
            case District_Types::mining:
                mines ++; break;
        }
    }
    std::cout << "Cities - " << city << " Factories - " << industrial << " Mines - " << mines << " Farms - " << farms << std::endl;
}
