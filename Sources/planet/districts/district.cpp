#include "district.hpp"

namespace stellaris {
    District::District() : District( District_Types::city ) { }
    District::District( District_Types type ) : type( type ), attributes ( new Attributes{} )  {
        jobsAdded = new std::vector<std::string>{};
    }
    District::~District() {
        delete attributes;
        delete jobsAdded;
    }
    District_Types District::getType() {
        return this->type;
    }
    std::string District::getAttValue( std::string attribute ) {
        return this->attributes->get( attribute );
    }
    Attributes * District::getAttributes() {
        return this->attributes;
    }
    std::vector<std::string> * District::getJobsAddes() {
        return jobsAdded;
    }

}
