#include "juniorship.hpp"

JuniorShip::JuniorShip() : Ship(2, "🚤")
{

}

JuniorShip::~JuniorShip()
{

}

std::string JuniorShip::get_image() { 
    return Ship::get_image(); 
}

size_t JuniorShip::get_health() {
    return Ship::get_health();
}