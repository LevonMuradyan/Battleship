#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"
#include "board.hpp"
#include <iostream>

#include <stdlib.h>


void draw_boards(const Board& my_board, const Board& enemy_board)
{
    std::cout << (
        " ______     ______     ______   ______   __         ______     ______     __  __     __     ______  \n"
        "/\\  == \\   /\\  __ \\   /\\__  _\\ /\\__  _\\ /\\ \\       /\\  ___\\   /\\  ___\\   /\\ \\_\\ \\   /\\ \\   /\\  == \\ \n"
        "\\ \\  __<   \\ \\  __ \\  \\/_/\\ \\/ \\/_/\\ \\/ \\ \\ \\____  \\ \\  __\\   \\ \\___  \\  \\ \\  __ \\  \\ \\ \\  \\ \\  _-/ \n"
        " \\ \\_____\\  \\ \\_\\ \\_\\    \\ \\_\\    \\ \\_\\  \\ \\_____\\  \\ \\_____\\  \\/\\_____\\  \\ \\_\\ \\_\\  \\ \\_\\  \\ \\_\\   \n"
        "  \\/_____/   \\/_/\\/_/     \\/_/     \\/_/   \\/_____/   \\/_____/   \\/_____/   \\/_/\\/_/   \\/_/   \\/_/   \n"
        "                                                                                                    \n");


    std::cout << "         A   B   C   D   E   F   G   H   I   J "
        << "          A   B   C   D   E   F   G   H   I   J " << std::endl;
    std::cout << "       +---+---+---+---+---+---+---+---+---+---+"
        << "       +---+---+---+---+---+---+---+---+---+---+" << std::endl;

    //std::cout << my_board[1][3] << std::endl;

    for (size_t i = 0; i < 10; ++i) {

        std::cout << "     " << i << " |";
        for (size_t j = 0; j < 10; ++j) {
            std::cout << " " << my_board.get_board()[i][j]->get_image() << " |";
        }


        std::cout << "     " << i << " |";
        for (size_t j = 0; j < 10; ++j) {
            std::cout << " " << enemy_board.get_board()[i][j]->get_image() << " |";
        }

        std::cout << std::endl;
        std::cout << "       +---+---+---+---+---+---+---+---+---+---+"
            << "       +---+---+---+---+---+---+---+---+---+---+" << std::endl;
    }


}

int main() {

    Board my_board;
    Board enemy_board;

    draw_boards(my_board, enemy_board);
    for (int i = 0; i < 10; ++i) {
        my_board.set_ship();
        system("clear");
        draw_boards(my_board, enemy_board);
    }

 

    return 0;
}