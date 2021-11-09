#ifndef ATTRIBUTES_HPP
#define ATTRIBUTES_HPP

#include <set>
#include <string>
#include <unordered_map>

namespace stellaris {

class Attributes {
public:
    Attributes();
    ~Attributes();
    bool has ( std::string );
    void set ( std::string, std::string );
    std::string get( std::string );
    int getAsInt( std::string );
    double getAsDouble ( std::string );
    bool getAsBool( std::string );
    void add( std::string, std::string );
    void del( std::string );
    void purge();
    int size();
    std::set<std::string> * getAttributeNames();


private:
    std::unordered_map< std::string, std::string > * attributes;

};

}

#endif
