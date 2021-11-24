#include "./planetplaner.hpp"

PlanetPlaner::PlanetPlaner(){
    p = std::make_unique<Planet>();
    p->setSize(20);
    plan();
}
Planet& PlanetPlaner::getPlanet(){
    return *p;
}

void PlanetPlaner::plan(){
    int pop = 0;
    int food = 0;
    int housing = 0;
    for ( int count = 0; count < p->getSize(); count++ ) {
        if ( p->getDistricts().size() == 0 ) {
            p->addDistrict( DF.agricultureFactory() );
           food += 8; pop +=2;
        } else {
            if ( ( housing - pop - 2 ) < 0 ) {
                p->addDistrict( DF.cityFactory() );
                pop ++; housing += 5;
            }
            else if ( ( food - pop - 2) <= 0 ) {
                 p->addDistrict( DF.agricultureFactory() );
                food += 8; pop +=2;
            }
            else {
                p->addDistrict( DF.industrialFactory() );
                pop +=2;
            }
        }
    }


}