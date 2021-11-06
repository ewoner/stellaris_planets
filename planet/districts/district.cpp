#include "district.hpp"

namespace stellaris {

District::District( ) : District( "VOID") {}
District::District( std::string name ) : name ( name ) {}
std::string District::getName() { return this->name; }
void District::setName( std::string newName ) { this->name = newName; }

}
