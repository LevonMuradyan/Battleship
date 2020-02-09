#include "seniorship.hpp"

SeniorShip::SeniorShip() :
    Ship(4,"@")
{

}

SeniorShip::~SeniorShip()
{

}

std::string SeniorShip::get_image() { 
    return Ship::get_image(); 
}

size_t SeniorShip::get_health() {
    return Ship::get_health();
}