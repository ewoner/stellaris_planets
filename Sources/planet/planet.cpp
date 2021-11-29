#include "planet.hpp"

namespace stellaris {

Planet::Planet() : Planet( "TEST", Planet_Types::gaia ){}
Planet::Planet( std::string name, Planet_Types type ) : name ( name ), type( type ){
    this->districts = std::make_unique<DistrictVector>();
    //this->OLD_districts = new std::vector<District*>{};
    this->buildings = new std::vector<Building>{};
    //this->population = new std::vector<PopulationUnit>{};
    this->colonyType = Colony_Types::colony;


}

std::string Planet::getName(){ return this->name; }
Planet_Types Planet::getType(){ return this->type; }
Colony_Types Planet::getColonyType(){ return this->colonyType; }
int Planet::getHabitablity(){ return this->habitablity; }
int Planet::getStability(){ return this->stability; }
float Planet::getStabilityBonus(){ return this->stabilityBonus; }
float Planet::getGovBonus(){ return this->govBonus; }
int Planet::getCrime(){ return this->crime; }
int Planet::getHousing(){ return this->housing; }
int Planet::getAmenities(){ return this->amenities; }
int Planet::getTradeValue(){ return this->tradeValue; }
int Planet::getAlloys(){ return this->alloys; }
int Planet::getAdminCap(){ return this->adminCap; }
int Planet::getApprovalRating(){ return this->approvalRating; }
int Planet::getCredits(){ return this->credits; }
int Planet::getMinerals(){ return this->minerals; }
int Planet::getFood(){ return this->food; }
int Planet::getCnsumGoods(){ return this->cnsumGoods; }
int Planet::getUnity(){ return this->unity; }
int Planet::getMotes(){ return this->motes; }
int Planet::getExGases(){ return this->exGases; }
int Planet::getCrystals(){ return this->crystals; }
int Planet::getLivingMetal(){ return this->livingMetal; }
int Planet::getZro(){ return this->zro; }
int Planet::getDarkMatter(){ return this->darkMatter; }
int Planet::getNanites(){ return this->nanites; }
int Planet::getPhysics(){ return this->physics; }
int Planet::getSociety(){ return this->society; }
int Planet::getEnginerring(){ return this->enginerring; }
int Planet::getSize(){ return this->size; }
std::vector<std::shared_ptr<District>>& Planet::getDistricts() {return *districts;}
//std::vector<District*> * Planet::getDistricts(){ return this->OLD_districts; }
int Planet::getSlots(){ return this->slots; }
std::vector<Building> * Planet::getBuildings(){ return this->buildings; }
int Planet::getPopulation(){ return this->population; }

void Planet::setName(std::string name ){ this->name = name; }
void Planet::setType(Planet_Types type ){ this->type = type; }
void Planet::setColonyType(Colony_Types type ){ this->colonyType = type; }
void Planet::setHabitablity(int habitablity){ this->habitablity = habitablity; }
void Planet::setStability(int stability ){ this->stability = stability; }
void Planet::setStabilityBonus(float bonus){ this->stabilityBonus = bonus; }
void Planet::setGovBonus(float bonus) { this->govBonus = bonus; }
void Planet::setCrime(int crime ){ this->crime = crime; }
void Planet::setHousing(int housing ){ this->housing = housing; }
void Planet::setAmenities(int amenities){ this->amenities = amenities; }
void Planet::setTradeValue(int value ){ this->tradeValue = value; }
void Planet::setAlloys(int alloys ){ this->alloys = alloys; }
void Planet::setAdminCap(int adminCap ){ this->adminCap = adminCap; }
void Planet::setApprovalRating(int rating ){ this->approvalRating = rating; }
void Planet::setCredits(int credits ){ this->credits = credits; }
void Planet::setMinerals(int minerals ){ this->minerals = minerals; }
void Planet::setFood(int food){ this->food = food; }
void Planet::setCnsumGoods(int goods ){ this->cnsumGoods = goods;}
void Planet::setUnity(int unity) { this->unity = unity;}
void Planet::setMotes(int motes ) { this->motes = motes; }
void Planet::setExGases(int gases ){ this->exGases = gases; }
void Planet::setCrystals(int crystals ) { this->crystals = crystals; }
void Planet::setLivingMetal(int lMetal ){ this->livingMetal =lMetal;}
void Planet::setZro(int zro){ this->zro = zro; }
void Planet::setDarkMatter(int matter) { this->darkMatter = matter; }
void Planet::setNanites(int nanites ){ this->nanites = nanites; }
void Planet::setPhysics(int physics){ this->physics = physics; }
void Planet::setSociety(int society ){ this->society = society; }
void Planet::setEnginerring(int enginerring){ this->enginerring = enginerring; }
void Planet::setSize(int size ){ this->size = size; }
void Planet::setDistricts(DistrictVector_ptr & newDistricts){
    districts = std::move<>(newDistricts);

}//void Planet::setDistricts(std::vector<District*> * newDistricts ){this->OLD_districts = newDistricts; }
void Planet::setSlots(int slots ){ this->slots = slots; }
void Planet::setBuildings(std::vector<Building> * newBuildings ){ this->buildings = buildings; }
void Planet::setPopulation(int newPops ) { this->population = newPops; }

bool Planet::loadFromFile( std::string filename ) {
    bool loaded = false;
    std::ifstream fin( filename );
    if ( fin.good() ) {
        std::string temp;
        fin >> temp >> name;
        //fin >> temp >> type;
        //fin >> temp >> colonyType;
        fin >> temp >>  habitablity;
        fin >> temp >>  stability;
        fin >> temp >>  stabilityBonus;
        fin >> temp >>  govBonus;
        fin >> temp >>  crime;
        fin >> temp >>  housing;
        fin >> temp >>  amenities;
        fin >> temp >>  tradeValue;
        fin >> temp >>  alloys;
        fin >> temp >>  adminCap;
        fin >> temp >>  approvalRating;
        fin >> temp >>  credits;
        fin >> temp >>  minerals;
        fin >> temp >>  food;
        fin >> temp >>  cnsumGoods;
        fin >> temp >>  unity;
        fin >> temp >>  motes;
        fin >> temp >>  exGases;
        fin >> temp >>  crystals;
        fin >> temp >>  livingMetal;
        fin >> temp >>  zro;
        fin >> temp >>  darkMatter;
        fin >> temp >>  nanites;
        fin >> temp >>  physics;
        fin >> temp >>  society;
        fin >> temp >>  enginerring;
        fin >> temp >> size;
        fin >> temp >> slots;
        //load districs
        //load buildings
        //load pops
        loaded = true;
    }
    fin.close();
    return loaded;
}

bool Planet::saveToFile( std::string filename ) {
    bool saved = false;
    std::ofstream fout( filename );
    if ( fout.good() ) {
        fout << "name               " << name << std::endl;
        //fin << temp << type;
        //fin << temp << colonyType;
        fout << "habitablity        " <<  habitablity << std::endl;
        fout << "stability          " <<  stability << std::endl;
        fout << "stability_bonus    " <<  stabilityBonus << std::endl;
        fout << "gov_bonus          " <<  govBonus << std::endl;
        fout << "crime              "<<  crime << std::endl;
        fout << "housing            "<<  housing << std::endl;
        fout << "amenities          "<<  amenities << std::endl;
        fout << "trade_value        "<<  tradeValue << std::endl;
        fout << "alloys             "<<  alloys << std::endl;
        fout << "admin_cap          "<<  adminCap << std::endl;
        fout << "approval_rating    "<<  approvalRating << std::endl;
        fout << "credits            "<<  credits << std::endl;
        fout << "minerals           "<<  minerals << std::endl;
        fout << "food               "<<  food << std::endl;
        fout << "consumer_goods     "<<  cnsumGoods << std::endl;
        fout << "unity              "<<  unity << std::endl;
        fout << "motes              "<<  motes << std::endl;
        fout << "gases              "<<  exGases << std::endl;
        fout << "crystals           "<<  crystals << std::endl;
        fout << "livingMetal        "<<  livingMetal << std::endl;
        fout << "zro                "<<  zro << std::endl;
        fout << "darkMatter         "<<  darkMatter << std::endl;
        fout << "nanites            "<<  nanites << std::endl;
        fout << "physics            "<<  physics << std::endl;
        fout << "society            "<<  society << std::endl;
        fout << "enginerring        "<<  enginerring << std::endl;
        fout << "size               "<< size << std::endl;
        fout << "slots              "<< slots << std::endl;
        //load districs
        //load buildings
        //load pops
        saved = true;
    }
    fout.close();
    return saved;
}

bool Planet::addDistrict( std::shared_ptr<District> newDistrict ) {
    if ( this->districts->size() >= this->size ) {
        return false;
    }
    else {
        this->districts->push_back( newDistrict );
    }
    this->housing += std::stoi( newDistrict->getAttribute("housing") );
    for (auto job : newDistrict->getJobsAdded() ) {
        if ( job == "Farmer" ) {
            food += 4;
        }
        else if ( job == "Technician") {
            credits += 4;
        }
        else if ( job == "Clerk" ) {
            amenities += 4;
        }
        else if ( job == "Metallurgist" ) {
            alloys += 4;
        }
        else if ( job == "Artisan" ) {
            cnsumGoods += 4;
        }
        population ++;
    }
    return true;
 }


bool Planet::delDistrict( std::string typeToDel ) {
    bool rv = false;
    auto iter = districts->begin();
    auto delDistrict = *iter;
    for ( ; iter != districts->end(); iter ++ ) {
        if ( ENUM::enum_name( (*iter)->getType() ) == typeToDel ) {
            delDistrict = *iter;

            rv = true;
            housing -= std::stoi( delDistrict->getAttribute("housing" ) );
            for (auto job : delDistrict->getJobsAdded() ) {
                if ( job == "Farmer" ) {
                    food -= 4;
                }
                else if ( job == "Technician") {
                    credits -= 4;
                }
                else if ( job == "Clerk" ) {
                    amenities -= 4;
                }
                else if ( job == "Metallurgist" ) {
                    alloys -= 4;
                }
                else if ( job == "Artisan" ) {
                    cnsumGoods -= 4;
                }
                population --;
            }
        }
    }
    districts->erase( iter );
    delDistrict->getType();
    return rv;
 }

}//namespace

