#ifndef DISTRICTFACTORY_HPP
#define DISTRICTFACTORY_HPP

#include <memory>
#include <string>

#include "district.hpp"

namespace stellaris {

class District_Factory {
public:
    static std::shared_ptr<District> cityFactory();
    static std::shared_ptr<District> industrialFactory();
    static std::shared_ptr<District> hiveFactory();
    static std::shared_ptr<District> nexusFactory();
    static std::shared_ptr<District> generatorFactory();
    static std::shared_ptr<District> miningFactory();
    static std::shared_ptr<District> agricultureFactory();
    static std::shared_ptr<District> tradeFactory();

};
}

#endif
namespace stellaris {
extern District_Factory DF;
}
//~/*URBAN*/city, industrial, hive, nexus,
    //~/*RESOURCE*/ generator, mining, agriculture, trade,
    //~/*ARCOS*/ arco_residental, arco_foundry, arco_industrial, arco_leisure, arco_sanctuary,
    //~/*RINGWORLD*/ rw_city, rw_hive, rw_nexus, rw_commercial, rw_generator, rw_research, rw_agricultural, rw_industrial,
    //~/*HABITATS*/ hb_habitation, hb_trade, hb_leisure, hb_mining, hb_reactor, hb_research, hb_industrial
