#include "middleship.hpp"

MiddleShip::MiddleShip() :
    Ship(3, "🛳 ")
{

}

MiddleShip::~MiddleShip()
{

}

std::string MiddleShip::get_image() { 
    return Ship::get_image(); 
}

size_t MiddleShip::get_health() {
    return Ship::get_health();
}