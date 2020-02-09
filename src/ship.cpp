#include "ship.hpp"

Ship::Ship()
{

}

Ship::Ship(size_t health, std::string image) : 
        m_health(health), 
        m_image(image) 
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

std::string Ship::get_image() { 
    return m_image; 
}

size_t Ship::get_health() { 
    return m_health; 
}