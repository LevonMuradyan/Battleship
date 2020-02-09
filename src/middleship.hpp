#ifndef MIDDLESHIP_HPP
#define MIDDLESHIP_HPP

#include "ship.hpp"

class MiddleShip : public Ship {

    public:
        MiddleShip();
        ~MiddleShip() override;
        std::string get_image() override;
        size_t get_health() override;
};

#endif // MIDDLESHIP_HPP 