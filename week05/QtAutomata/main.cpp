#include "View/guiautomata.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUIAutomata w;
    w.show();

    return a.exec();
}
