#include "automatacontroller.h"

AutomataController::AutomataController()
{

}


void AutomataController::create(AutomataController::ATTYPES type){
    if (type == AutomataController::AFDTYPE){
        atmController = new AFD();
    }
    if (type == AutomataController::AFNDTYPE){
        atmController = new AFND();
    }
}

void AutomataController::addState(State _state){
    atmController->addState(_state); // calling the model
}
