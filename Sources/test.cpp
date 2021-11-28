#include <iostream>

//#include "pltracker/typedefs.hpp"

#include "utilities/menu.hpp"
#include "utilities/enum.hpp"

#include "planet/planet.hpp"
#include "planet/districts/district.hpp"
#include "planet/districts/districtfactory.hpp"
#include "planet/districts/districttypedefs.hpp"

int test( void ) {
    std::cout << "Main running.....saving.!"  << std::endl;
    stellaris::Planet p;
    auto d = stellaris::DF.cityFactory();
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

    std::cout << "Printing Type Defs: \n";
    std::cout << ENUM::enum_name( p.getType() ) << " " << ENUM::enum_integer( p.getType() ) << std::endl;
    std::cout << ENUM::enum_name( p.getColonyType() ) << " " << ENUM::enum_integer( p.getColonyType() ) << std::endl;
    auto ds = p.getDistricts();
    ds.push_back( d );
    std::cout << ENUM::enum_name( ds.at( 0 )->getType() ) << " "  << ENUM::enum_integer( ds.at(0)->getType() ) << std::endl;
    ds.at(0)->setType( stellaris::District_Types::industrial);
    std::cout << ENUM::enum_name( ds.at( 0 )->getType() ) << " "  << ENUM::enum_integer( ds.at(0)->getType() ) << std::endl;


    std::cout << "\n\n" << createMenu( {"Item A", "Item B", "Item C" } );

    std::cout << "\n\n\fAll tests finished!" << std::endl;
    return 0;
}
