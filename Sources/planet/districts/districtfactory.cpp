#include "districtfactory.hpp"

namespace stellaris {

    std::shared_ptr<District> District_Factory::cityFactory() {
        std::shared_ptr<District> d = std::make_shared<District>(District_Types::city);
        d->setAttribute( "upkeep", std::to_string( 2 ));
        d->setAttribute( "housing", std::to_string( 5 ));
        d->setAttribute( "slot", std::to_string( 1 ));
        d->getJobsAddes().push_back("clerk");
        return d;
    }
    std::shared_ptr<District> District_Factory::industrialFactory() {
        std::shared_ptr<District> d = std::make_shared<District>(  District_Types::industrial) ;
        d->setAttribute( "upkeep", std::to_string( 2 ));
        d->setAttribute( "housing", std::to_string( 2 ));
        d->getJobsAddes().push_back("Metallurgist");
        d->getJobsAddes().push_back("Artisan");
        return d;
    }
    std::shared_ptr<District> District_Factory::hiveFactory() {
        std::shared_ptr<District> d = std::make_shared<District>( District_Types::hive);
        d->setAttribute( "upkeep", std::to_string( 2 ));
        d->setAttribute( "housing", std::to_string( 6 ));
        d->setAttribute( "slot", std::to_string( 1 ));
        d->getJobsAddes().push_back("Maintenance_Drone");
        d->getJobsAddes().push_back("Maintenance_Drone");
        d->getJobsAddes().push_back("Maintenance_Drone");
        return d;
    }
    std::shared_ptr<District> District_Factory::nexusFactory() {
        std::shared_ptr<District> d = std::make_shared<District>( District_Types::nexus);
        d->setAttribute( "upkeep", std::to_string( 2 ));
        d->setAttribute( "housing", std::to_string( 5 ));
        d->setAttribute( "slot", std::to_string( 1 ));
        d->getJobsAddes().push_back("Maintenance_Drone");
        d->getJobsAddes().push_back("Maintenance_Drone");
        d->getJobsAddes().push_back("Maintenance_Drone");
        return d;
    }
    std::shared_ptr<District> District_Factory::generatorFactory() {
        std::shared_ptr<District> d = std::make_shared<District>( District_Types::generator);
        d->setAttribute( "upkeep", std::to_string( 1 ));
        d->setAttribute( "housing", std::to_string( 2 ));
        d->getJobsAddes().push_back("Technician");
        d->getJobsAddes().push_back("Technician");
        return d;
    }
    std::shared_ptr<District> District_Factory::miningFactory() {
        std::shared_ptr<District> d = std::make_shared<District>( District_Types::mining);
        d->setAttribute( "upkeep", std::to_string( 1 ));
        d->setAttribute( "housing", std::to_string( 2 ));
        d->getJobsAddes().push_back("Miner");
        d->getJobsAddes().push_back("Miner");
        return d;
    }
    std::shared_ptr<District> District_Factory::agricultureFactory() {
        std::shared_ptr<District> d = std::make_shared<District>( District_Types::agriculture);
        d->setAttribute( "upkeep", std::to_string( 1 ));
        //d->setAttribute( "housing", std::to_string( 2 ));
        d->getJobsAddes().push_back("Farmer");
        d->getJobsAddes().push_back("Farmer ");
        return d;
    }
    std::shared_ptr<District> District_Factory::tradeFactory() {
        std::shared_ptr<District> d = std::make_shared<District>(District_Types::trade);
        d->setAttribute( "upkeep", std::to_string( 1 ));
        d->setAttribute( "housing", std::to_string( 2 ));
        d->getJobsAddes().push_back("Clerk");
        d->getJobsAddes().push_back("Artisan");
        return d;
    }

}
