#include "ship.hpp"

Ship::Ship()
{

}

Ship::Ship(int health, Direct direct): 
    m_health(health), 
    m_direct(direct)
{

}

Ship::~Ship()
{
    
}

bool Ship::isDead() 
{
    if (0 == m_health)
        return true;
    return false;    
}
