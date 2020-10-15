#ifndef STRUCTURE
#define STRUCTURE

#include <vector>

#include "Component.h"

class Structure
{
//data and type alias
public:
    
protected:
    std::unique_ptr<b2Body> body;
    std::vector<Component> components;
private:
    

public:

private:
};

#endif
