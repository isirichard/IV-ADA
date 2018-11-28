#include "qw_screen.h"
#include <QDebug>
#include "SingletonDrawer.h"

QW_Screen::QW_Screen(QWidget *parent) : QWidget(parent)
{
    this->setBackgroundRole(QPalette::Base);
    this->setAutoFillBackground(true);
}

void QW_Screen::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    foreach (StateView node, SingletonDrawer::getInstance().getStates()) {
        node.draw(painter);
    }
    this->update();
}
