#ifndef TUTORIALPAGE_INTRO_H
#define TUTORIALPAGE_INTRO_H

#include <QWidget>

namespace Ui {
class TutorialPage_Intro;
}

class TutorialPage_Intro : public QWidget
{
    Q_OBJECT

public:
    explicit TutorialPage_Intro(QWidget *parent = 0);
    ~TutorialPage_Intro();

private:
    Ui::TutorialPage_Intro *ui;
};

#endif // TUTORIALPAGE_INTRO_H
