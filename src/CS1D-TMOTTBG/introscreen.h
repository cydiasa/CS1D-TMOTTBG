#ifndef INTROSCREEN_H
#define INTROSCREEN_H

#include <QWidget>

namespace Ui {
class IntroScreen;
}

class IntroScreen : public QWidget
{
    Q_OBJECT

public:
    explicit IntroScreen(QWidget *parent = 0);
    ~IntroScreen();

private slots:
    void on_NonUserInterface_buttonEnter_clicked();

    void on_ExternalTutorial_button_clicked();

private:
    Ui::IntroScreen *ui;
};

#endif // INTROSCREEN_H
