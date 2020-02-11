#ifndef WATER_HPP
#define WATER_HPP

#include "object.hpp"
#include <string>

class Water : public Object {
private:
    std::string m_image = "  ";
public:
    Water() {};
    ~Water() {};
    std::string get_image() override { return m_image; };
};

#endif // WATER_HPP