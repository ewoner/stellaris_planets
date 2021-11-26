#include "district.hpp"

namespace stellaris {
    District::District() : District( District_Types::city ) { }
    District::District( District_Types type ) : type( type )   {
        attributes = std::make_unique<Attributes>();
        jobsAdded = std::make_unique<std::vector<std::string>>();
    }
    District::~District() {
        
    }
    District_Types District::getType() {
        return this->type;
    }
    std::string District::getAttValue( std::string attribute ) {
        return this->attributes->get( attribute );
    }
    Attributes& District::getAttributes() {
        return *attributes;
    }
    std::vector<std::string>& District::getJobsAddes() {
        return *jobsAdded;
    }

}
