#include "districttypedefs.hpp"


namespace stellaris {

template<>
std::string toString( District_Types type ) {
    switch ( type ) {
        case  District_Types::city :
           return "City"; break;
        default:
            return "Not defined"; break;
    }

}

}//namespace

