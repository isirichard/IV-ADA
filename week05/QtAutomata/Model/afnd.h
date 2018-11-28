#ifndef AFND_H
#define AFND_H

#include "iautomata.h"

class AFND: public IAutomata
{
public:
    AFND();
    void addState(State _state);
};

#endif // AFND_H
