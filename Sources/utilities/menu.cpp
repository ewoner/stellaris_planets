/*
 * menu.cpp
 *
 * Copyright 2021 Brion "ewoner" Lang <ewoner@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include "menu.hpp"



int createMenu( std::initializer_list<const char*> items, bool exit ) {
    std::vector<std::string*> menuItems{};
    for ( const char* s : items ) {
        menuItems.push_back( new std::string{ s } );
    }
    return displayMenu( menuItems, exit );
}
/* Removed for String* version.  New CreateMenu added to make it as such. and call displayMenu below.

int displayMenu(std::vector<std::string> menuOptions, bool exit ){
    int input = -1;
    std::string temp;
    while ( true ) {
        for ( size_t index = 0; index < menuOptions.size(); index ++) {
            std::cout << ( index + 1 ) << ") " << menuOptions.at( index ) << "\n";
        }
        std::cout << "0) ";
        if ( exit ) {
            std::cout << "Exit\n-> " << std::flush;
        }
        else {
            std::cout << "Go Back\n-> " << std::flush;
        }
        getline( std::cin, temp );
        try { input = stoi( temp );
        } catch ( ... ) {}
        if  ( not ( input < 0 or input > menuOptions.size() ) ) {
            break;
        }
        std::cout << "Unknown reponse.\n";
    }
    return input;
}
*/
int displayMenu(std::vector<std::string*>& menuOptions, bool exit ){
    int input = -1;
    std::string temp;
    while ( true ) {
        for ( size_t index = 0; index < menuOptions.size(); index ++) {
            std::cout << ( index + 1 ) << ") " << *menuOptions.at( index ) << "\n";
        }
        std::cout << "0) ";
        if ( exit ) {
            std::cout << "Exit\n-> " << std::flush;
        }
        else {
            std::cout << "Go Back\n-> " << std::flush;
        }
        getline( std::cin, temp );
        try { input = stoi( temp );
        } catch ( ... ) {}
        if  ( not ( input < 0 or input > menuOptions.size() ) ) {
            break;
        }
        std::cout << "Unknown reponse.\n";
    }
    return input;
}

