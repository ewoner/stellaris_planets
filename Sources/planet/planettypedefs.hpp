#ifndef PLANETTYPEDEFS_HPP
#define PLANETTYPEDEFS_HPP

#include <string>

//#include <../pltracker/typedefs.hpp>
namespace stellaris {

enum class Planet_Types  { arid, desert, savanna, //dry climates
                            alpine, arctic, tundra, // frozend climates
                            continetal, ocean, tropical, //wet climates
                            gaia, tomb, ecumenopolis, relic,  //others
                            hive, machine
                            };

enum class Colony_Types { //planets
                            generator_world, mining_world, agri_world,
                            urban_world, nest_planet, machine_nexus,
                            forge_world, factory_world, industrial_world,
                            refinery_world, tech_world, fortress_world,
                            rural_world, fringe_planet,
                            // Hive worlds
                            hive_world, hive_world_foundry,
                            //machine worlds
                            machine_world, machine_world_foundry, machine_world_factory,
                            //ecumenopolis
                            ecumenopolis, ecumenopolis_industrial, ecumenopolis_foundry,
                            ecumenopolis_factory, ecumenopolis_research,
                            //ring worlds
                            ring_world, research_ring_world,agriculture_ring_world,
                            commercial_ring_world, generator_ring_world,
                            //Habitats
                            habitat, research_station, fortress_station,
                            foundry_station, factory_station, industrial_station,
                            refinery_station, leisure_station, trade_station,
                            generator_station, mining_station,bureaucratic_station,
                            //Decision Based
                            resort_world, penal_colony, thrall_world,
                            //special
                            empire_capital, hive_capital, machine_capital,
                            colony, coloy_machine, bureaucratice_center
                            };

}//namespace
#endif
