#include "board.hpp"
#include "water.hpp"
#include <iostream>
#include "internship.hpp"
#include "juniorship.hpp"
#include "middleship.hpp"
#include "seniorship.hpp"
#include "utils.hpp"


Board::Board() {
    m_board = Matrix(10, std::vector<Object*>(10));
    m_obj = new Water();

    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            m_board[i][j] = m_obj;
        }
    }        
}


Board::Board(const Board& other) {
    m_obj = other.m_obj;
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            m_board[i][j] = other.m_board[i][j];
        }
    } 
}

Board::~Board() {
    delete m_obj;
}

Board& Board::operator=(const Board& other) {
    delete m_obj;
    m_obj = other.m_obj;
    for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
            m_board[i][j] = other.m_board[i][j];
        }
    }
    return (*this); 
}

Board::Matrix Board::get_board() const {
    return m_board;
}

Object* Board::get_obj() const {
    return m_obj;
}

void Board::set_ship() {
    
    int ship_number;
    Ship* ship = nullptr;

    while(true) {


        std::cout << "\n\nChoose Ship" << std::endl;
        if(1) {
            std::cout << "1: One-Block-Ship" << std::endl;
        }
        if(1) {
            std::cout << "2: Two-Block-Ship" << std::endl;
        }
        if(1) {
            std::cout << "3: Three-Block-Ship" << std::endl;
        }
        if(1) {
            std::cout << "4: Four-Block-Ship" << std::endl;
        }    
    
        std::cout << "\nEnter your number =  ";
        std::cin >> ship_number;

        if(ship_number == 1 ) {
            std::cout << "You can only create 4 times One-Block-Ship " << std::endl;
            //continue;
        }
        if(ship_number == 2 ) {
            std::cout << "You can only create 3 times Two-Block-Ship " << std::endl;
            //continue;
        }
        if(ship_number == 3 ) {
            std::cout << "You can only create 2 times Three-Block-Ship " << std::endl;
            //continue;
        }
        if(ship_number == 4 ) {
            std::cout << "You can only create 1 time Four-Block-Ship " << std::endl;
            //continue;
        }

        if(ship_number < 1 || ship_number > 4) {
            std::cout << "Please, write number between 1-4" << std::endl;
            std::cin.clear();
            continue;
        }
        
        switch (ship_number) {
            case 1:
                ship = new InternShip();
                break;
            case 2:
                ship = new JuniorShip();
                break;
            case 3:
                ship = new MiddleShip();
                break;
            case 4:
                ship = new SeniorShip();
                break;               
        }
        break;
    }

    int x;
    char y; 
    while(true) {
        std::cout << "\nEnter Location =  ";
        std::cin >> x >> y;
        y = static_cast<int>(y);

        bool lower = (y >= 'a' && y <= 'j');
        bool upper = (y >= 'A' && y <= 'J');
        bool digit_y = (y >= '0' && y <= '9'); 
        bool digit_x = (x >= 0 && x <= 9);   

        if(!lower && !upper && !digit_y || !digit_x) {

            std::cin.clear();
            std::cout << "Please, enter valid coordinates!\n";
            
        }
        else {
            y -= !lower? !upper? !digit_y? : 48 : 65 : 97;
            break; 
        }
    }

    Location location(x, y);

    std::cout << "\nChoose Direction" << std::endl;
    std::cout << "1: Horizontal" << std::endl;
    std::cout << "2: Vertical" << std::endl;
    int direction_number;

    std::cout << "\nEnter your number =  ";
    std::cin >> direction_number;
    std::cout << std::endl;

    Direction direction;
    switch (direction_number) {
    case 1:
        direction = Direction(HORIZONTAL);
        break;
    case 2:
        direction = Direction(VERTICAL);
        break;
    default:
        std::runtime_error("Invalid input");
    }


       
    for (size_t i = 0; i < ship->get_health(); ++i) {
        if (direction == HORIZONTAL) {
            m_board[location.get_x()][location.get_y() + i] = ship;
        }
        else if (direction == VERTICAL) {
            m_board[location.get_x() + i][location.get_y()] = ship;
        }
        else {
            throw std::runtime_error("Invalid Direction");
        }
    }
}
