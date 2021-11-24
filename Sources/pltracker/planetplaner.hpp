#ifndef PLANETPLANER_HPP
#define PLANETPLANER_HPP

#include <memory>

#include "planet/planet.hpp"

#include "planet/districts/district.hpp"
#include "planet/districts/districttypedefs.hpp"
#include "planet/districts/districtfactory.hpp"

using namespace stellaris;

class PlanetPlaner {
public:
    PlanetPlaner();
    Planet& getPlanet();
    void plan();
private:
    std::unique_ptr<Planet> p;

};

#endif