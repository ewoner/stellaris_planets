#ifndef DISTRICT_HPP
#define DISTRICT_HPP

#include <string>
#include <vector>

#include "districttypedefs.hpp"
#include "../../attributes/attributes.hpp"

namespace stellaris {

class District {
public:
    ~District();
    District_Types getType();
    std::string getAttValue(std::string);
    Attributes * getAttributes();
    std::vector<std::string>  * getJobsAddes();

//debugging//testing only
    void setType( District_Types type ) { this->type = type; }
private:
    District();
    District( District_Types );
    District_Types type;
    Attributes * attributes;
    std::vector<std::string> * jobsAdded; //Future Job class

    friend class District_Factory;
};
}

#endif
