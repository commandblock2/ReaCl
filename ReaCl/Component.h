#ifndef COMPONENT
#define COMPONENT

#include <memory>
#include <box2d/box2d.h>

class Component
{
//data and type alias
public:
    int health;
    bool constructing = true;
    std::unique_ptr<b2Fixture> fixure;
    
private:
    

//functions
public:

private:
};

#endif
