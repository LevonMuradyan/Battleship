#ifndef LOCATION_HPP
#define LOCATION_HPP

/**
@file location.hpp
@author XCOM
@brief class location
*/

/**
@class Location
@brief x, y locations for ships
*/

class Location {
///private members
private:
    int x;
    int y;
///constructor
public:
    /**
    @brief Location constructor
    */
    Location(int x, int y);
///public methods
public:
    void setX();
    int getX() const;
    void setY();
    int getY() const;
};

#endif ///LOCATION_HPP
