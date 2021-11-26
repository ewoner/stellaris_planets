#ifndef HASATTRIBUTES_HPP
#define HASATTRIBUTES_HPP

#include <string>

#include "attributes.hpp"

namespace stellaris {

class HasAttributes {
public:
    Attributes& getAttributes();
    std::string getAttribute(std::string);
    void setAttribute(std::string, std::string);
    bool hasAttribute(std::string);
    void delAttribute(std::string);
    void setAttributes(Attributes*);
    void copyAttributes(Attributes&);
    
private:
    std::unique_ptr<Attributes> attributes;
};


}//namespace 



#endif