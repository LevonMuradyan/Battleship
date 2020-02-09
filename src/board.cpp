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
    std::cout << "\n\nChoose Ship" << std::endl;
    std::cout << "1: one block ship" << std::endl;
    std::cout << "2: two block ship" << std::endl;
    std::cout << "3: three block ship" << std::endl;
    std::cout << "4: four block ship" << std::endl;
    int ship_number;
    std::cout << "\nEnter your number =  ";
    std::cin >> ship_number;

    Ship* ship = nullptr;
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
        default:
            std::runtime_error("Invalid Input");
            
    }

    std::cout << "\nEnter Location =  ";
    int x, y;
    std::cin >> x >> y;
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
