#ifndef ATTRIBUTES_HPP
#define ATTRIBUTES_HPP



#include <memory>
#include <set>
#include <string>
#include <unordered_map>

namespace stellaris {

#define NO_ATTRIBUTE "NULL"

class Attributes {
public:
    using Attribute_Type = std::unordered_map< std::string, std::string >;
    using Attribute_Type_ptr = std::unique_ptr<Attribute_Type>;

    Attributes();
    ~Attributes();
    bool has ( const std::string & );
    void set ( const std::string &, const std::string & );
    std::string get( const std::string & );
    int getAsInt( const std::string & );
    double getAsDouble ( const std::string & );
    bool getAsBool( const std::string & );
    void add( const std::string &, const std::string & );
    void del( const std::string & );
    void purge();
    int size();
    std::set<std::string> * getAttributeNames();
    
private:
    Attribute_Type_ptr attributes;
    //std::unique_ptr<std::unordered_map< std::string, std::string >> attributes;

};

}

#endif
