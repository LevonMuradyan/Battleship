#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include "object.hpp"
#include "utils.hpp"
#include "location.hpp"
#include "ship.hpp"
#include <time.h>

class Board {
    public:
        using Matrix = std::vector<std::vector<Object*>>;
    private:
        Matrix m_board;
        Object* m_obj;

    public:
        Board();
        Board(const Board&);
        ~Board();
        Board& operator=(const Board&);
        Matrix get_board() const;
        Object* get_obj() const;
        bool check_position(int, int, int, Direction);
        void set_ship();
        void set_random_ships();
};

#endif // BOARD_HPP
