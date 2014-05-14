#include "introscreen.h"
#include "ui_introscreen.h"
#include "nonuserinterface_ui.h"
#include "tutorialpage_intro.h"

IntroScreen::IntroScreen(QWidget *parent) : QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::IntroScreen)
{
    ui->setupUi(this);
}

IntroScreen::~IntroScreen()
{
    delete ui;
}
/* NonUserInterface BTN CLICK OPEN */
void IntroScreen::on_NonUserInterface_buttonEnter_clicked()
{
    NonUserInterface_UI *nonuserfaceUIWNDBTN;
    nonuserfaceUIWNDBTN = new NonUserInterface_UI();
    nonuserfaceUIWNDBTN->show();

    this->hide();
}

/* External Tutorial BTN CLICK OPEN */
void IntroScreen::on_ExternalTutorial_button_clicked()
{
    this->hide();
}
