#include "attributes/hasattributes.hpp"

namespace stellaris {

HasAttributes::HasAttributes() {
    attributes = std::make_unique<Attributes>();

}
Attributes& HasAttributes::getAttributes() {
        return *attributes;
}

std::string HasAttributes::getAttribute(std::string attribute ) {
    return attributes->get( attribute );
}

void HasAttributes::setAttribute(std::string attribute, std::string value ) {
    attributes->set( attribute, value );
}

bool HasAttributes::hasAttribute(std::string attribute ){
    return attributes->has( attribute );    
}
void HasAttributes::delAttribute(std::string attribute ) {
    attributes->del( attribute );
}
void HasAttributes::setAttributes(Attributes * newAttributes ) {
    attributes.reset( newAttributes );
}
void HasAttributes::copyAttributes(Attributes& copyAttributes ) {
    for ( auto key : *copyAttributes.getAttributeNames() ) {
        attributes->set( key, copyAttributes.get( key) );
    }

}

} //namespace;