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
    int pop = 0;
    int food = 0;
    int housing = 0;
    int power = 0;
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
            if ( ( food - pop - 2) <= 0 ) {
                #if DEBUG
                    std::cerr << std::setw(17) <<  "Low food  : ";
                #endif
                newDistrict = DF.agricultureFactory();
            }
            else if ( ( power - upkeep ) <= 0 ) {
                #if DEBUG
                    std::cerr << std::setw(17) <<  "Low power  : ";
                #endif
                newDistrict = DF.generatorFactory();
            }
            else if ( ( housing - pop - 2 ) < 0 ) {
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
        housing += std::stoi( newDistrict->getAttribute( "housing" ) );
        upkeep += std::stoi( newDistrict->getAttribute( "upkeep" ) );
        for ( auto job : newDistrict->getJobsAdded() ) {
            if ( job == "Farmer" ) {
                food += 4;
            }
            if ( job == "Technician") {
                power += 4;
            }
            pop ++;
        }
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