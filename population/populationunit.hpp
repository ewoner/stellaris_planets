#ifndef POPULATIONUNIT_HPP
#define POPULATIONUNIT_HPP

#include <string>

namespace stellaris {

class PopulationUnit {
public:
    PopulationUnit( std::string RaceName);
    PopulationUnit( std::string RaceName, int number );
    std::string getRaceName();
    int getNumber();
    void setRaceName( std::string );
    void setNumber( int );
    void grow();
    void reduce();
private:
    std::string raceName;
    int number;
};

}


#endif
