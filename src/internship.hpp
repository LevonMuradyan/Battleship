#ifndef INTERNSHIP_HPP
#define INTERNSHIP_HPP

#include "ship.hpp"

class InternShip : public Ship {


    public:
        InternShip();
        ~InternShip() override;
        std::string get_image() override;
        size_t get_health() override;
};

#endif // INTERNSHIP_HPP 