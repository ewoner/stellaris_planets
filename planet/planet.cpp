#include "planet.hpp"

namespace stellaris {

Planet::Planet() : Planet( "TEST", Planet_Types::planet ){}
Planet::Planet( std::string name, Planet_Types type ) : name ( name ), type( type ){
    this->districts = new std::vector<District>{};
    this->buildings = new std::vector<Building>{};
    this->population = new std::vector<PopulationUnit>{};
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
std::vector<District> * Planet::getDistricts(){ return this->districts; }
int Planet::getSlots(){ return this->slots; }
std::vector<Building> * Planet::getBuildings(){ return this->buildings; }
std::vector<PopulationUnit> * Planet::getPopulation(){ return this->population; }

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
void Planet::setDistricts(std::vector<District> * newDistricts ){this->districts = newDistricts; }
void Planet::setSlots(int slots ){ this->slots = slots; }
void Planet::setBuildings(std::vector<Building> * newBuildings ){ this->buildings = buildings; }
void Planet::setPopulation(std::vector<PopulationUnit> * newPops ) { this->population = newPops; }

}
