#include "bot.hpp"


Bot::Bot() {
    m_matrix = Matrix(10, std::vector<bool> (10));
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            m_matrix[i][j] = true;
        }
    }  
}
Bot::~Bot() {

}

Bot::Matrix Bot::get_matrix() {
    return m_matrix;
}

void Bot::change_matrix(size_t x, size_t y, size_t ship_size, Direction direction) {    
    int row_begin = -1;
    int col_begin = -1;
    int row_end = 1;
    int col_end = 1;
    if(x == 0) { row_begin = 0; }
    if(y == 0) { col_begin = 0; }
    if(x == 9) { row_end = 0; }
    if(y == 9) { col_end = 0; }  
    
    if(direction == VERTICAL) {
        row_end += (ship_size - 1);    
    }
    if(direction == HORIZONTAL) {
        col_end += (ship_size - 1); 
    }
    
    for(int i = row_begin; i <= row_end ; ++i) {
        for(int j = col_begin; j <= col_end; ++j) {
            m_matrix[x + i][y + j] = false;
        }
    }
}

Location Bot::atack() {
    while(true) {
        int x = rand() % 10;
        int y = rand() % 10;

        if(m_matrix[x][y]) {
            return Location(x, y);
        }
    }   
}