#include "guiautomata.h"
#include "ui_guiautomata.h"
#include "qw_screen.h"
#include <QDebug>
#include <QPainter>
#include "SingletonDrawer.h"

GUIAutomata::GUIAutomata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUIAutomata)
{
    ui->setupUi(this);
    ui->verticalLayout->addWidget(new QW_Screen());
    atmController = new AutomataController();
    atmController->create(AutomataController::AFDTYPE);
}

GUIAutomata::~GUIAutomata()
{
    delete ui;
    if (atmController) delete atmController;
}

void GUIAutomata::addState()
{
    qDebug()<< "Calling the addState from GUIAutomata";
    // we can take all the parameters needed from the interface
    QString label = ui->QLE_state->text();
    SingletonDrawer::getInstance().addState(StateView(label));
    //call the controlle to work with the model

    atmController->addState(State(label));
}
