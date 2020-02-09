#ifndef JUNIORSHIP_HPP
#define JUNIORSHIP_HPP

#include "ship.hpp"

class JuniorShip : public Ship {
    public:
        JuniorShip();
        ~JuniorShip() override;
        std::string get_image() override;
        size_t get_health() override;
};

#endif // JUNIORSHIP_HPP 