#include "internship.hpp"

InternShip::InternShip() :
    Ship(1, "⛵")
{

}

InternShip::~InternShip() 
{

}

std::string InternShip::get_image() { 
    return Ship::get_image(); 
}

size_t InternShip::get_health() {
    return Ship::get_health();
}
