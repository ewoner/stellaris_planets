#ifndef DISTRICT_HPP
#define DISTRICT_HPP

#include <memory>
#include <string>
#include <vector>

#include "districttypedefs.hpp"
#include "../../attributes/attributes.hpp"

namespace stellaris {

class District {
public:
    District( District_Types );
    ~District();
    District_Types getType();
    std::string getAttValue(std::string);
    Attributes& getAttributes();
    std::vector<std::string>&  getJobsAddes();

//debugging//testing only
    void setType( District_Types type ) { this->type = type; }
private:
    District();
    
    District_Types type;
    std::unique_ptr<Attributes> attributes;
    std::unique_ptr<std::vector<std::string>> jobsAdded;  // Future Job class

    friend class District_Factory;
};
}

#endif
