#include "attributes.hpp"

namespace stellaris {

    Attributes::Attributes() {
        this->attributes = std::make_unique<std::unordered_map<std::string, std::string>>();
    }
    Attributes::~Attributes() {
        
    }
    bool Attributes::has ( const std::string & attribute ) {
        return this->attributes->count( attribute ) > 0;
    }
    void Attributes::set ( const std::string & attribute, const std::string & value ) {
       
        if ( this->has( attribute ) ) {
            this->attributes->at( attribute ) = value;
        } else {
            this->attributes->emplace( attribute, value );
        }
    }
    std::string Attributes::get( const std::string & attribute ) {
        if ( has(attribute) ) {
            return this->attributes->at( attribute );
        }
        else {
            return NO_ATTRIBUTE;
        }
    }
    int Attributes::getAsInt( const std::string & attribute ) {
        try {
            return stoi( this->attributes->at( attribute ) );
        }
        catch ( ... ) {
            return 0;
        }
        
    }
    double Attributes::getAsDouble ( const std::string & attribute ) {
        try {
            return stod( this->attributes->at( attribute ) );
        }
        catch ( ...) {
            return 0;
        }
        
    }
    bool Attributes::getAsBool( const std::string & attribute ) {
        bool rv = false;
        if ( has( attribute ) and  this->attributes->at( attribute ) == "true" ) {
            rv = true;
        }
        return rv;
    }
    void Attributes::add( const std::string & attribute , const std::string & value ) {
        set( attribute, value );
    }
    void Attributes::del( const std::string & attribute ) {
        this->attributes->erase( attribute );
    }
    void Attributes::purge() {
        this->attributes->clear();
    }
    int Attributes::size() {
        return this->attributes->size();
    }
    std::set<std::string>* Attributes::getAttributeNames() {
        std::set<std::string> * rv = new std::set<std::string>{};
        for (auto  iter = this->attributes->begin();  iter != this->attributes->end();  iter++ ) {
            rv->emplace(  iter->first );
        }
        return rv;
    }

}
