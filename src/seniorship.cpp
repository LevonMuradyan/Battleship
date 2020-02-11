#include "seniorship.hpp"

int SeniorShip::SeniorShip_count = 1;

SeniorShip::SeniorShip() :
    Ship(4,"⛴ ")
{
    --SeniorShip_count;
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

int SeniorShip::get_SeniorShip_count() const {
    return SeniorShip_count;
}