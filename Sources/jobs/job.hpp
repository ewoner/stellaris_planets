#ifndef JOB_HPP
#define JOB_HPP

#include "../attributes/hasattributes.hpp"
#include "../attributes/attributes.hpp"

#include "jobtypedefs.hpp"

namespace stellaris {

class Job : public HasAttributes {
public:
    Job( const Strata_Types &, const Job_Types &);
    Job( const Strata_Types &, const Job_Types &, HasAttributes::Attributes_ptr& );
    Strata_Types getStrata();
    Job_Types getType();
private:
    Strata_Types strata;
    Job_Types type;
    

friend class JobFactory;
};


}//namespace


#endif
