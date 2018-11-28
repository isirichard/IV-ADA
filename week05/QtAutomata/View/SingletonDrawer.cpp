#include "SingletonDrawer.h"
#include <QDebug>

void SingletonDrawer::addState(StateView _node)
{
    qDebug() << "Calling the addState from graphical automata ";
    _node.setX(xglobal+35*nodes.size());
    _node.setY(yglobal);
    qDebug() << "inserting " <<20*nodes.size() << " --- " <<yglobal << _node.getLabel();
    nodes.push_back(_node);
}

std::vector<StateView> &SingletonDrawer::getStates()
{
    return nodes;
}
