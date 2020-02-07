#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>

class Board {
    private:
        std::string** my_board;
        std::string** enemy_board;
    public:
        Board();
        //Board(std::string **, std::string **);
        //Board(const Board&);
        //~Board();
        //Board& operator=(const Board&);
        void drawBoard();
        std::string** get_my_board();
        std::string** get_enemy_board();
};

#endif // BOARD_HPP
