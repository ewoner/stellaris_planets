#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>

namespace stellaris {

class Building {
public:
    Building();
    Building( std::string );
    std::string getName();
    void setName( std::string );
private:
    std::string name;
};
}

#endif
