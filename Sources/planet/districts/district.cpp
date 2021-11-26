#include "district.hpp"

namespace stellaris {
    District::District() : District( District_Types::city ) { }
    District::District( District_Types type ) : type( type )   {
        jobsAdded = std::make_unique<std::vector<std::string>>();
    }
    District::~District() {
        
    }
    District_Types District::getType() {
        return this->type;
    }
    std::vector<std::string>& District::getJobsAddes() {
        return *jobsAdded;
    }

}
