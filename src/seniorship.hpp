#ifndef SENIORSHIP_HPP
#define SENIORSHIP_HPP

#include "ship.hpp"

class SeniorShip : public Ship {
    private:
        static int SeniorShip_count;

    public:
        SeniorShip();
        ~SeniorShip() override;
        std::string get_image() override;
        size_t get_health() override;
        int get_SeniorShip_count() const;

};

#endif // SENIORSHIP_HPP 