#ifndef DISTRICT_HPP
#define DISTRICT_HPP

#include <string>

namespace stellaris {

class District {
public:
    District();
    District( std::string );
    std::string getName();
    void setName( std::string );
private:
    std::string name;
};
}

#endif
