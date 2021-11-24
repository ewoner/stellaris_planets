#ifndef PLANET_HPP
#define PLANET_HPP

#include <fstream>
#include <memory>
#include <string>
#include <vector>

#include "buildings/building.hpp"
#include "districts/district.hpp"
#include "../population/populationunit.hpp"
#include "planettypedefs.hpp"

namespace stellaris {

class Planet {
public:
    Planet();
    Planet(std::string, Planet_Types);

    std::string getName();
    Planet_Types getType();
    Colony_Types getColonyType();
    int getHabitablity();
    int getStability();
    float getStabilityBonus();
    float getGovBonus();
    int getCrime();
    int getHousing();
    int getAmenities();
    int getTradeValue();
    int getAlloys();
    int getAdminCap();
    int getApprovalRating();
    int getCredits();
    int getMinerals();
    int getFood();
    int getCnsumGoods();
    int getUnity();
    int getMotes();
    int getExGases();
    int getCrystals();
    int getLivingMetal();
    int getZro();
    int getDarkMatter();
    int getNanites();
    int getPhysics();
    int getSociety();
    int getEnginerring();
    int getSize();
    std::vector<std::shared_ptr<District>>& getDistricts();
    //std::vector<District*> * getDistricts();
    int getSlots();
    std::vector<Building> * getBuildings();
    std::vector<PopulationUnit> * getPopulation();

    void setName(std::string);
    void setType(Planet_Types);
    void setColonyType(Colony_Types);
    void setHabitablity(int);
    void setStability(int);
    void setStabilityBonus(float);
    void setGovBonus(float);
    void setCrime(int);
    void setHousing(int);
    void setAmenities(int);
    void setTradeValue(int);
    void setAlloys(int);
    void setAdminCap(int);
    void setApprovalRating(int);
    void setCredits(int);
    void setMinerals(int);
    void setFood(int);
    void setCnsumGoods(int);
    void setUnity(int);
    void setMotes(int);
    void setExGases(int);
    void setCrystals(int);
    void setLivingMetal(int);
    void setZro(int);
    void setDarkMatter(int);
    void setNanites(int);
    void setPhysics(int);
    void setSociety(int);
    void setEnginerring(int);
    void setSize(int);
    void setDistricts(std::unique_ptr<std::vector<std::shared_ptr<District>>>& );
    //void setDistricts(std::vector<District*> * );
    void setSlots(int);
    void setBuildings(std::vector<Building> * );
    void setPopulation(std::vector<PopulationUnit> *);

    bool loadFromFile( std::string );
    bool saveToFile( std::string );

    bool addDistrict( std::shared_ptr<District> );
    bool delDistrict( std::shared_ptr<District> );

private:
    std::string name;
    Planet_Types type;
    Colony_Types colonyType;
    int habitablity = 0;
    int stability = 0;
    float stabilityBonus = 0;
    float govBonus = 0;
    int crime = 0;
    int housing = 0;
    int amenities = 0;
    int tradeValue = 0;
    int alloys = 0;
    int adminCap = 0;
    int approvalRating = 0;
    int credits = 0;
    int minerals = 0;
    int food = 0;
    int cnsumGoods = 0;
    int unity = 0;
    int motes = 0;
    int exGases = 0;
    int crystals = 0;
    int livingMetal = 0;
    int zro = 0;
    int darkMatter = 0;
    int nanites = 0;
    int physics = 0;
    int society = 0;
    int enginerring = 0;
    int size = 0;

    std::unique_ptr< std::vector< std::shared_ptr<District> > > districts;   
    
    //std::vector<District*> * OLD_districts;
    int slots = 0;
    std::vector<Building> * buildings;
    std::vector<PopulationUnit> * population;





};

}

#endif
