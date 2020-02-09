#ifndef SHIP_HPP
#define SHIP_HPP

#include "utils.hpp"
#include "location.hpp"
#include "object.hpp"
/**
@file ship.hpp
@author Levon Muradyan
@brief Battleship game ships class
*/


/**
@class Ship
*/

class Ship : public Object {
    private:
        // Number from [0..4] where 0 is dead.
        size_t m_health = 0;
        std::string m_image = " ";
    public:
        Ship();
        Ship(size_t, std::string);
        virtual ~Ship();
        bool isDead();     
        std::string get_image() override;
        virtual size_t get_health();
};

#endif // SHIP_HPP 
