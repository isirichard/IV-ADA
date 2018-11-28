#ifndef AUTOMATACONTROLLER_H
#define AUTOMATACONTROLLER_H

#include "../Model/iautomata.h"
#include "../Model/afd.h"
#include "../Model/afnd.h"

class AutomataController
{

    IAutomata* atmController;
public:
    static enum ATTYPES{AFDTYPE,AFNDTYPE} Attypes;
    AutomataController();
    void create(AutomataController::ATTYPES type);
    void addState(State _state);
};

#endif // AUTOMATACONTROLLER_H
