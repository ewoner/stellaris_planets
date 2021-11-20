#ifndef PLANETTYPEDEFS_HPP
#define PLANETTYPEDEFS_HPP

#include <string>

#include <../pltracker/typedefs.hpp>
namespace stellaris {

enum class Planet_Types  { planet };
enum class Colony_Types { colony };

template<>
std::string toString( Planet_Types type);
template <>
std::string toString(Colony_Types type);
}//namespace
#endif
