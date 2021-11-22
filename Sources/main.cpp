#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#include "utilities/menu.hpp"

#include "planet/planet.hpp"
#include "planet/districts/district.hpp"
#include "planet/districts/districttypedefs.hpp"
#include "planet/districts/districtfactory.hpp"

using namespace stellaris;

extern District_Factory df;

void displayDistricts( Planet p );
std::vector<std::string*>* getTypes( Planet& p );

int main( void ) {

    Planet p;
    while ( true ) {
        displayDistricts( p );
        int result = createMenu( {"Add District", "Remove District" }, true );
        if ( result == 1 ){
            int result2 = createMenu( {"City", "Factory"} );
            if ( result2 == 1 ) {
                p.getDistricts()->push_back( df.cityFactory() );
            }
            else if ( result2 == 2 ) {
                p.getDistricts()->push_back( df.industrialFactory() );
            }
        }
        else if ( result == 2 ) {
            std::string * names;
            int size;
            std::vector<std::string*> * typesNames = getTypes( p );
            
        }
        else if ( result == 0 ) {
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

    for ( District* d :  *(p.getDistricts()) ) {
        switch ( d->getType() ) {
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

std::vector<std::string*> * getTypes( Planet& p ) {
    std::vector<District*> *districts = p.getDistricts();
    std::unordered_set<std::string*> types;
    for ( District* d : *districts ) {
        types.insert(new std::string{ toString( d->getType() ) } );
    }
    return new std::vector<std::string*>{types.begin(),types.end()};
}
