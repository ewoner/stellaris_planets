#ifndef DISTRICT_HPP
#define DISTRICT_HPP

#include <string>
#include <vector>

#include "districttypedefs.hpp"
#include "../../attributes/attributes.hpp"

namespace stellaris {

class District {
public:
    District();
    District( District_Types );
    ~District();
    District_Types getType();
    std::string getAttValue(std::string);
    Attributes * getAttributes();
    std::vector<std::string>  * getJobsAddes();
private:
    District_Types type;
    Attributes * attributes;
    std::vector<std::string> * jobsAdded; //Future Job class
};
}

#endif
