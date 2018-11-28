#include "afnd.h"

AFND::AFND()
{

}


void AFND::addState(State _state){
    std::cout << "Adding state into the AFND in the model with label:" << _state.getLabel().toStdString()
              << "and value " << _state.getValue() << std::endl;
}
