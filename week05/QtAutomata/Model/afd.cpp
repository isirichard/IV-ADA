#include "afd.h"

AFD::AFD()
{
   id = 0;
}

void AFD::addState(State _state)
{
    _state.setValue(id++);
    std::cout << "Adding state into the AFD in the model with label " << _state.getLabel().toStdString()
              << " and value " << _state.getValue() << std::endl;

}
