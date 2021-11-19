#ifndef TYPEDEFS_HPP
#define TYPEDEFS_HPP

#include <string>

namespace stellaris {

template <class T>
int ord( T type ) {
    return static_cast<int>( type );
}

template <class T>
std::string toString( T type ){
    return "Undefined toString<>() function." ;
}

}//namespace


#endif