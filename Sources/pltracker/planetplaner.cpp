//Set DEBUG to 1 for debugging output
#define DEBUG 0
#if DEBUG
    #include <iostream>
    #include <iomanip>
#endif


#include "./planetplaner.hpp"

PlanetPlaner::PlanetPlaner(){
    #if DEBUG 
        std::cerr << "--->PlanetPlanner() -- ";
    #endif
    p = std::make_unique<Planet>();
    p->setSize(20);
    plan();
    #if DEBUG
        std::cerr << "Done!" << std::endl;
    #endif
}
Planet& PlanetPlaner::getPlanet(){
    #if DEBUG
        std::cerr << "--->getPlanet() -- Done! " << std::endl;
    #endif
    return *p;
}

void PlanetPlaner::plan(){
    #if DEBUG
        std::cerr << "--->plan() -- " << std::endl;
    #endif
    
    int upkeep = 0;
    std::shared_ptr<District> newDistrict;
    #if DEBUG 
        std::cerr << "    Reason     : " << " Pop  || Food || Power  :   Action" << std::endl; 
        std::cerr << std::setw(55) << std::setfill('-') << '-' << std::setfill(' ') << std::endl;
    #endif
    for ( int count = 0; count < p->getSize(); count++ ) {
        if ( p->getDistricts().size() == 0 ) {
            #if DEBUG
                std::cerr << std::setw(17) << "First district : ";
            #endif
            newDistrict = DF.agricultureFactory();
            
        } else {
            if ( ( p->getFood() - p->getPopulation() - 2) <= 0 ) {
                #if DEBUG
                    std::cerr << std::setw(17) <<  "Low food  : ";
                #endif
                newDistrict = DF.agricultureFactory();
            }
            else if ( ( p->getCredits() - upkeep ) <= 0 ) {
                #if DEBUG
                    std::cerr << std::setw(17) <<  "Low power  : ";
                #endif
                newDistrict = DF.generatorFactory();
            }
            else if ( ( p->getHousing() - p->getPopulation() - 2 ) < 0 ) {
                #if DEBUG
                    std::cerr << std::setw(17) << "Low Housing : ";
                #endif
                newDistrict = DF.cityFactory();
            }
            else {
                #if DEBUG
                    std::cerr << std::setw(17) <<  "Good to grow  : ";
                #endif
                newDistrict = DF.industrialFactory();
            }
        }
        p->addDistrict( newDistrict );
        upkeep += std::stoi( newDistrict->getAttribute( "upkeep" ) );
        #if DEBUG
            std::cerr << std::setw(5) << std::to_string(pop) + "-" + std::to_string(housing) << " || " << std::setw(5) << std::left  << std::to_string(pop) + "-" + std::to_string(food) << " || " << std::setw(5) << std::left  << std::to_string(upkeep) + "-" + std::to_string(power) << " : " << std::right;
            std::cerr << "added " << toString( newDistrict->getType() ) << std::endl;
        #endif
    }
    #if DEBUG
        std::cerr << "--->plan() -- Done!" << std::endl;
    #endif

}

#undef DEBUG