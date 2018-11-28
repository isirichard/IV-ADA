#ifndef STATE_H
#define STATE_H

#include <QString>

class State
{
private:
    QString qlabel;
    int value;
public:
    State(QString _label){
        qlabel = _label;
        value = 0;
    }

    QString getLabel() {
        return qlabel;
    }

    void setLabel(QString _label){
        qlabel = _label;
    }

    int getValue(){
        return value;
    }

    void setValue(int _value){
        value = _value;
    }
};

#endif // STATE_H
