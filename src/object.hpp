#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <string>

class Object {

public:
    Object() {};
    ~Object() {};
    virtual std::string get_image() { return "o"; };
};

#endif // OBJECT_HPP