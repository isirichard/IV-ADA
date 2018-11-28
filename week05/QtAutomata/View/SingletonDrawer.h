#ifndef SingletonDrawer_H
#define SingletonDrawer_H
#include "stateView.h"

class SingletonDrawer
{
private:
    int xglobal,yglobal;
    int counter;
    std::vector<StateView> nodes;
    SingletonDrawer(){xglobal =20;yglobal=20;}
    SingletonDrawer(const SingletonDrawer&){}
    void operator=(const SingletonDrawer&);
  public:
    static SingletonDrawer& getInstance(){
        //singleton eager
        static SingletonDrawer graphAutomata;
        return graphAutomata;
    }

    void addState(StateView _node);
    std::vector<StateView>& getStates();
};

#endif // SingletonDrawer_H
