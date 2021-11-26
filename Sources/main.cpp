#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#include "utilities/menu.hpp"

#include "pltracker/planetplaner.hpp"

#include "planet/planet.hpp"
#include "planet/districts/district.hpp"
#include "planet/districts/districttypedefs.hpp"
#include "planet/districts/districtfactory.hpp"

using namespace stellaris;

// Helper Function Protytypes
void displayDistricts( Planet& p );
std::vector<std::string*>* getTypes( Planet& p );

int main( void ) {
    Planet p;
    p.setSize( 12 );
    while ( true ) {
        displayDistricts( p );
        int result = createMenu( {"Add District", "Remove District" }, true );
        if ( result == 1 ){
            int result2 = createMenu( {"City", "Factory","Farm"} );
            if ( result2 == 1 ) {
                p.addDistrict( DF.cityFactory() );
            }
            else if ( result2 == 2 ) {
                p.addDistrict( DF.industrialFactory() );                
            }
            else if ( result2 == 3 ) {
                p.addDistrict( DF.agricultureFactory() );
            }
        }
        else if ( result == 2 ) {
            std::string * names;
            int size;
            std::string typeToDel;
            std::vector<std::string*>* types = getTypes( p ) ;
            int result2 = createMenu( types ) - 1;
            if ( result2 >= 0 and result2 < types->size() ) {
                typeToDel = *types->at( result2 );
            }
            for ( auto d = p.getDistricts().begin(); d != p.getDistricts().end(); d++) {
                if ( toString( (*d)->getType() ) == typeToDel ) {
                    std::cout << "Nuking that district!"  << std::endl;
                    p.getDistricts().erase( d );
                    break;
                }
            }
        }
        else if ( result == 0 ) {
            break;
        }
        

    }
    p = Planet();
    p.setSize(10);
    PlanetPlaner pp;
    displayDistricts( pp.getPlanet() );

    
    return 0;
}

void displayDistricts( Planet& p ) {
    int farms = 0;
    int plants = 0;
    int industrial = 0;
    int city = 0;

    int power = 0;
    int upkeep = 0;
    int food = 0;
    int housing = 0;
    int pop = 0;

    for ( auto d :  (p.getDistricts()) ) {
        
        switch ( d->getType() ) {
            case District_Types::agriculture:
                upkeep ++;farms ++; food += 8; pop += 2; housing +=2; break;
            case District_Types::city:
                upkeep +=2;city ++; housing += 5; pop ++;break;
            case District_Types::industrial:
                upkeep +=2;industrial ++; pop += 2; housing+=2; break;
            case District_Types::generator:
                upkeep ++;plants ++; power+=8;break;
        }
    }
    std::cout << "Size = "<< p.getDistricts().size() << "/" << p.getSize()  <<" --\tCities - " << city << " Factories - " << industrial << " Power Planets - " << plants << " Farms - " << farms << std::endl;
    std::cout << "\t\t\t\tPop = " << pop << "   Food = " << food << "   Power = " << (power - upkeep) << "/"<< power << "   Housing = " << (housing - pop) << "/" << housing << std::endl;
}

std::vector<std::string*> * getTypes( Planet& p ) {
    auto districts = p.getDistricts();
    std::unordered_set<std::string*> types;
    for (auto d : districts ) {
        types.insert(new std::string{ toString( d->getType() ) } );
    }
    return new std::vector<std::string*>{types.begin(),types.end()};
}
