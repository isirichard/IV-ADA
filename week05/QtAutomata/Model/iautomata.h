#ifndef IAUTOMATA_H
#define IAUTOMATA_H

#include "state.h"
#include <iostream>

class IAutomata
{
public:
    virtual void addState(State _state) = 0;
};

#endif // IAUTOMATA_H
