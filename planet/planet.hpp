#ifndef PLANET_HPP
#define PLANET_HPP

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
    std::vector<District> * getDistricts();
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
    void setDistricts(std::vector<District> * );
    void setSlots(int);
    void setBuildings(std::vector<Building> * );
    void setPopulation(std::vector<PopulationUnit> *);

private:
    std::string name;
    Planet_Types type;
    Colony_Types colonyType;
    int habitablity;
    int stability;
    float stabilityBonus;
    float govBonus;
    int crime;
    int housing;
    int amenities;
    int tradeValue;
    int alloys;
    int adminCap;
    int approvalRating;
    int credits;
    int minerals;
    int food;
    int cnsumGoods;
    int unity;
    int motes;
    int exGases;
    int crystals;
    int livingMetal;
    int zro;
    int darkMatter;
    int nanites;
    int physics;
    int society;
    int enginerring;
    int size;
    std::vector<District> * districts;
    int slots;
    std::vector<Building> * buildings;
    std::vector<PopulationUnit> * population;





};

}

#endif
