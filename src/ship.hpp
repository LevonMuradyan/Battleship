#ifndef SHIP_HPP
#define SHIP_HPP

#include "utils.hpp"
#include "location.hpp"
#include "player.hpp"
/**
@file ship.hpp
@author Levon Muradyan
@brief Battleship game ships class
*/


/**
@class Ship
*/

class Ship {
    private:
        // Number from [0..4] where 0 is dead.
        uint16_t m_health;

        // Where does current shi[] stand?
	    Location m_location;

	    // Which direction does he face?
	    Direction m_direction; 

        // Ships knows to which player it belongs.
	    Player m_player;
    public:
        Ship();
        Ship(uint16_t, 
            Location,
            Direction,
            Player);
        virtual ~Ship();
        bool isDead();     
        
};

#endif // SHIP_HPP 
