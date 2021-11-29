#ifndef HASATTRIBUTES_HPP
#define HASATTRIBUTES_HPP

#include <string>

#include "attributes.hpp"

namespace stellaris {

class HasAttributes {
public:
    using Attributes_ptr = std::unique_ptr<Attributes>;
    HasAttributes();
    Attributes& getAttributes();
    std::string getAttribute(std::string);
    void setAttribute(std::string, std::string);
    bool hasAttribute(std::string);
    void delAttribute(std::string);
    void setAttributes(Attributes*);
    void copyAttributes(Attributes&);
    
private:
    Attributes_ptr attributes;
};


}//namespace 



#endif