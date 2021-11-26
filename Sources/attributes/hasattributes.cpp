#include "attributes/hasattributes.hpp"

namespace stellaris {

Attributes& HasAttributes::getAttributes() {
        return *attributes;
}

std::string HasAttributes::getAttribute(std::string) {
    std::string rv = NO_ATTRIBUTE;
    return rv;
    

}
void HasAttributes::setAttribute(std::string, std::string) {}
bool HasAttributes::hasAttribute(std::string){return false;}
void HasAttributes::delAttribute(std::string) {}
void HasAttributes::setAttributes(Attributes*) {}
void HasAttributes::copyAttributes(Attributes&) {}

} //namespace;