#ifndef AFD_H
#define AFD_H

#include "iautomata.h"

class AFD: public IAutomata
{
private:
    int id;
public:
    AFD();
    void addState(State _state);
};

#endif // AFD_H
