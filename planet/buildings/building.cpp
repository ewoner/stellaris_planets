#include "building.hpp"

namespace stellaris {

Building::Building( ) : Building( "VOID") {}
Building::Building( std::string name ) : name ( name ) {}
std::string Building::getName() { return this->name; }
void Building::setName( std::string newName ) { this->name = newName; }

}
