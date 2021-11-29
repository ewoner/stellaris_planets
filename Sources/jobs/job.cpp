#include "job.hpp"

namespace stellaris {

    Job::Job( const Strata_Types& strata, const Job_Types& type ) : strata ( strata ), type( type ) {}
    Job::Job( const Strata_Types& strata, const Job_Types& type, HasAttributes::Attributes_ptr & newAttributes ) : Job( strata, type) {
        this->copyAttributes( *newAttributes );
    }
    Strata_Types Job::getStrata() { return this->strata; }
    Job_Types Job::getType() { return this->type; }

    
}//namespace
