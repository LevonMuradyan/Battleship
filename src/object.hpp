#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <string>

class Object {

public:
    Object() {};
    ~Object() {};
    virtual std::string get_image() = 0;
};

#endif // OBJECT_HPP