#include "securepasswordpass.h"
#include "ui_securepasswordpass.h"
#include "smtph.h"
#include <QGlobal.h>
#include <QTime>

SecurePasswordPass::SecurePasswordPass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecurePasswordPass)
{

    QTime time = QTime::currentTime();
    QString testC;
    QString num1;
    QString num2;
    QString num3;
    qsrand((uint)time.msec());

    for (int idx = 0; idx < 10; idx++)
    {
        //int ranNum = mu.Randomizer(0, 100);
        num1 = QString::number(((rand() % (101)) + 0));
        num2 = QString::number(((rand() % (101)) + 0));
        num3 = QString::number(((rand() % (101)) + 0));
    }

    testC = num1 + num2 + num3;

//    codePtr = testC;

    Smtp *gNs = new Smtp("irbtinc@gmail.com", "1ZXF181955", "smtp.gmail.com");
    connect(gNs, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    gNs->sendMail("iRobotInc", "9492929398@txt.att.net" , "ACCCode", testC);

    ui->setupUi(this);
}

SecurePasswordPass::~SecurePasswordPass()
{
    delete ui;
}
