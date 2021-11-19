#include <ostream>

#include "planettypedefs.hpp"

namespace stellaris {

template<>
std::string toString( Planet_Types type) {
    switch ( type ) {
        case Planet_Types:: planet :
            return "Planet";
        default:
            return "Not Defined Planet";

    }

}

template <>
std::string toString(Colony_Types type) {
    switch ( type) {
       case Colony_Types::colony : 
            return  "Colony"; break;
        default:
            return "Not defined"; break;
   }
}



}//namespace