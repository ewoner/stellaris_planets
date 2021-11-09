#include "populationunit.hpp"
namespace stellaris {

PopulationUnit::PopulationUnit( std::string RaceName) : PopulationUnit(RaceName, 1) {}
PopulationUnit::PopulationUnit( std::string RaceName, int number ) : raceName( RaceName ), number( number ) {}
std::string PopulationUnit::getRaceName(){ return this->raceName; }
int PopulationUnit::getNumber() { return this->number; }
void PopulationUnit::setRaceName( std::string raceName ) { this->raceName = raceName; }
void PopulationUnit::setNumber( int number ) { this->number = number; }
void PopulationUnit::grow() { this->number ++; }
void PopulationUnit::reduce() { this->number --; }

}
