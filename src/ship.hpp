#ifndef SHIP_HPP
#define SHIP_HPP

/**
@file ship.hpp
@author XCOM
@brief Battleship game ships class
*/


enum Direct {
    HORIZONTAL,
    VERTICAL
};

/**
@class Ship
*/

class Ship {
private:
    int m_health;
    Direct m_direct;    
public:
    Ship();
    Ship(int, Direct);
    virtual ~Ship();
    bool isDead();     
        
};

#endif // SHIP_HPP 
