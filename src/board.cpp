#include "board.hpp"
#include <iostream>

Board::Board() {
    std::string** my_board = new std::string*[10];
    std::string** enemy_board = new std::string*[10];
    for (size_t i = 0; i < 10; ++i) {
        my_board[i] = new std::string[10];
        enemy_board[i] = new std::string[10];
    }
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            my_board[i][j] = "*";
            enemy_board[i][j] = "#";
        }
    }        
}

/*Board::Board(std::string** my, std::string** enemy) {
    my_board = my;
    enemy_board = enemy;
    for(int i = 0; i < 10; ++i) {
        my_board[i] = my[i];
        enemy_board[i] = enemy[i];
    }
}*/

/*Board::Board(const Board& other) {
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            my_board[i][j] = other.my_board[i][j];
            enemy_board[i][j] = other.enemy_board[i][j];
        }
    } 
}*/

/*Board::~Board() {
    for (int i = 0; i < 10; ++i) {
        delete [] my_board[i];
    }
    delete [] my_board;

    for (int i = 0; i < 10; ++i) {
        delete [] enemy_board[i];
    }
    delete [] enemy_board;
}*/

/*Board& Board::operator=(const Board& other) {
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            my_board[i][j] = other.my_board[i][j];
            enemy_board[i][j] = other.enemy_board[i][j];
        }
    }
    return (*this); 
}*/

void Board::drawBoard()
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

    for ( size_t i = 0; i < 10; ++i ){

	    std::cout << "     " << i << " |";
        for ( size_t j = 0; j < 10; ++j ) { 
            //std::string s = my_board[i][j];
            std::cout << " " << " " << " |";
        }

        std::cout << "     " << i << " |";
        for ( size_t j = 0; j < 10; ++j ) {
            std::cout << " " << " " << " |";
        }
        
        std::cout << std::endl;
        std::cout << "       +---+---+---+---+---+---+---+---+---+---+" 
              << "       +---+---+---+---+---+---+---+---+---+---+" << std::endl;
    }
}

std::string** Board::get_my_board() {
    return my_board;
}

std::string** Board::get_enemy_board() {
    return enemy_board;
}

