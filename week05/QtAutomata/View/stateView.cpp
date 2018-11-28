#include "stateView.h"
#include <QDebug>

QString StateView::getLabel() const
{
    return label;
}

void StateView::setLabel(const QString &value)
{
    label = value;
}

int StateView::getY() const
{
    return y;
}

void StateView::setY(int value)
{
    y = value;
}

int StateView::getX() const
{
    return x;
}

void StateView::setX(int value)
{
    x = value;
}

StateView::StateView(QString _label)
{
    this->label = _label;
}

StateView::StateView(char *_label)
{
    this->label = QString(_label);
}

void StateView::operator=(StateView & _node)
{
    qDebug() << "Copying from reference" <<_node.getX() << "---" << _node.getY() << " -- "<< _node.getLabel();
    this->x = _node.x;
    this->y = _node.y;
    this->label = _node.label;
}

void StateView::operator=(StateView _node)
{
    qDebug() << "Copying " <<_node.getX() << "---" << _node.getY() << " -- "<< _node.getLabel();
    x = _node.getX();
    y = _node.getY();
    label = _node.getLabel();
}

void StateView::draw(QPainter& painter){
    //we can set all the properties for the node
    painter.drawEllipse(x,y,20,20);
    painter.drawText(x+2,y+13,label);
}
