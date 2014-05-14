#include "tutorialpage_intro.h"
#include "ui_tutorialpage_intro.h"

TutorialPage_Intro::TutorialPage_Intro(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::TutorialPage_Intro)
{
    ui->setupUi(this);
}

TutorialPage_Intro::~TutorialPage_Intro()
{
    delete ui;
}
