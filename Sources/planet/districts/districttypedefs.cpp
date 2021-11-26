#include "districttypedefs.hpp"


namespace stellaris {

template<>
std::string toString( District_Types type ) {
    switch ( type ) {
        case  District_Types::city :
           return "City"; break;
        case  District_Types::agriculture :
           return "Farm"; break;
        case  District_Types::industrial :
           return "Factory"; break;
        case  District_Types::generator :
           return "Power Plant"; break;
           
        default:
            return "Not defined"; break;
    }

}

}//namespace

