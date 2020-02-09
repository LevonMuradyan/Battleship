#ifndef SENIORSHIP_HPP
#define SENIORSHIP_HPP

#include "ship.hpp"

class SeniorShip : public Ship {

    public:
        SeniorShip();
        ~SeniorShip() override;
        std::string get_image() override;
        size_t get_health() override;

};

#endif // SENIORSHIP_HPP 