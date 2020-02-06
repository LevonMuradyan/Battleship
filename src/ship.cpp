#include "ship.hpp"

Ship::Ship()
{

}

Ship::Ship(uint16_t health, Location location, Direction direction, Player player) : 
    m_health(health),
    m_location(location), 
    m_direction(direction),
    m_player(player)
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
