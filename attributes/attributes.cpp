#include "attributes.hpp"

namespace stellaris {

    Attributes::Attributes() {
        this->attributes = new std::unordered_map<std::string, std::string>{};
    }
    Attributes::~Attributes() {
        delete this->attributes;
    }
    bool Attributes::has ( std::string attribute ) {
        return this->attributes->count( attribute ) != 0;
    }
    void Attributes::set ( std::string attribute, std::string value ) {
        if ( this->has( attribute ) ) {
            this->attributes->at( attribute ) = value;
        } else {
            this->attributes->emplace( attribute, value );
        }
    }
    std::string Attributes::get( std::string attribute ) {
        return this->attributes->at( attribute );
    }
    int Attributes::getAsInt( std::string attribute ) {
        try {
            return stoi( this->attributes->at( attribute ) );
        }
        catch ( std::invalid_argument const&) {
            return 0;
        }
        catch ( std::out_of_range const& ) {
            return 0;
        }
    }
    double Attributes::getAsDouble ( std::string attribute ) {
        try {
            return stod( this->attributes->at( attribute ) );
        }
        catch ( std::invalid_argument const&) {
            return 0;
        }
        catch ( std::out_of_range const& ) {
            return 0;
        }
    }
    bool Attributes::getAsBool( std::string attribute ) {
        bool rv = false;
        if ( this->attributes->at( attribute ) == "true" ) {
            rv = true;
        }
        return rv;
    }
    void Attributes::add( std::string attribute , std::string value ) {
        this->attributes->emplace( attribute, value );
    }
    void Attributes::del( std::string attribute ) {
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
        for (auto IT = this->attributes->begin(); IT != this->attributes->end(); IT++ ) {
            rv->emplace( IT->first );
        }
        return rv;
    }

}
