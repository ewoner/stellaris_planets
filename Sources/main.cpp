#include <iostream>
#include <algorithm>

#include "planet.hpp"
#include "planettypedefs.hpp"

using namespace stellaris;
using namespace std;

int main(int argc, char **argv)
{
    stellaris::Planet p;
    p.setType(stellaris::Planet_Types::arid);
    bool results = p.saveToFile("test3.planet");
    std::cout << std::boolalpha << results << std::endl;
    p = stellaris::Planet{};
    std::cout << ENUM::enum_name( p.getType() ) << std::endl;
    p.loadFromFile("test3.planet");
    std::cout << ENUM::enum_name( p.getType() ) << std::endl;
    auto names =  ENUM::enum_names<Planet_Types>();
    std::sort(names.begin(), names.end());
    for ( auto name : names )
        std::cout << name << "\n";
    return 0;
}

