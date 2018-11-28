#ifndef GUIAUTOMATA_H
#define GUIAUTOMATA_H

#include <QMainWindow>
#include "../Controller/automatacontroller.h"

namespace Ui {
class GUIAutomata;
}

class GUIAutomata : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUIAutomata(QWidget *parent = 0);
    ~GUIAutomata();

private slots:
    void addState();

private:
    AutomataController* atmController;
    Ui::GUIAutomata *ui;
};

#endif // GUIAUTOMATA_H
