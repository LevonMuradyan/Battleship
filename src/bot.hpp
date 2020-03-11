#ifndef BOT_HPP
#define BOT_HPP

#include <vector>
#include <cstdlib>
#include "location.hpp"
#include "utils.hpp"

class Bot {
public:
    using Matrix = std::vector<std::vector<bool>>;
private:
    Matrix m_matrix;
public:
    Bot();
    ~Bot();
    Matrix get_matrix();
    void change_matrix(size_t x, size_t y, size_t ship_size, Direction direction);
    Location atack();
};

#endif // BOT_HPP