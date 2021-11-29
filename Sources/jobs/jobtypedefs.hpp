#ifndef JOBTYPEDEFS_HPP
#define JOBTYPEDEFS_HPP

namespace stellaris {

enum class Strata_Types {   ruler,specialist,worker,slave
                            menial_drone, complex_drone,
                            undesirable, criminal
};


enum class Job_Types  {//Rulers
                            administrator, executive, high_priest,
                            merchant, noble, science_director,
                        //Specialist
                            artificer, artisan, bureaucrat,
                            catalytic_technician, chemist, colonist,
                            culture_worker, death_chronicler, death_priest,
                            duelist, entertainer, gas_refiner, manager,
                            medical_worker, metallurgist, necromancer,
                            necrophyte, pearl_diver,priest,researcher,
                            roboticist,telepath,translucer,
                        //Worker Jobs
                            angler, clerk, crystal_miner, farmer,
                            gas_extractor, miner, mortal_initiate,
                            mote_harvester, prosperity_preacher,
                            scrap_miner, soldier, technician,
                        //slaves
                            grid_amalgamated, livestock, servant,
                            overseer, toiler,
                        //gestalt menial jobs
                            agri_drone, maintenace_drone, mining_drone,
                            scrap_miner_drone, tech_drone, warrior_drone,
                        //gestalt complex jobs
                            brain_drone, calculator, catalytic_drone,chem_drone,
                            chronicle_drone,coordinator,crystal_mining_drone,
                            evaluator,fabicator,foundry_drone,gas_extraction_drone,
                            hunter_seeker_drone, lensing_drone, mote_harvesting_drone,
                            refinery_drone, replicator, spawning_drone,
                            synapse_drone,artisan_drone, bio_trophy,
                        //Special Jobs
                            unemployed, purging, criminal, deviant_drone,
                            corrupt_drone,
                        //Event Jobs - Workers/menial
                            titan_hunter,gas_plant_drone,
                            nemma_miner, nemma_mining_drone,
                            odd_factory_worker, odd_factory_drone,
                            subterranean_liaison_drone,
                        //Event Jobs - Specialist/complex
                            cave_cleaners,
                            cave_cleaner_drone, gas_plant_engineer,
                            subterranean_liaison_officer,
                            transmuter, transmuter_drone,
                             dimensinal_portal_researcher,
                            diensional_portal_drone
};

}//namespace


#endif
