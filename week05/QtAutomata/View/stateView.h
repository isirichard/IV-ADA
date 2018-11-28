#ifndef StateView_H
#define StateView_H

#include <QPainter>
#include <QString>


class StateView
{
private:
    int x,y;
    QString label;

public:
    StateView(QString _label);
    StateView(char*);
    void operator=(StateView&);
    void operator=(StateView);
    QString getLabel() const;
    void setLabel(const QString &value);
    int getY() const;
    void setY(int value);
    int getX() const;
    void setX(int value);
    void draw(QPainter& painter);
};

#endif // StateView_H
