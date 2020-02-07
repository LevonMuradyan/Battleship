#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"
#include "board.hpp"
#include <iostream>



int main() {

    Board board; 
    /*for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            std::cout << board.get_my_board()[i][j] << " ";
        }
        std::cout << std::endl;
    }*/
    board.drawBoard();
    
    return 0;
}
