#ifndef SECUREPASSWORDPASS_H
#define SECUREPASSWORDPASS_H

#include <QWidget>

namespace Ui {
class SecurePasswordPass;
}

class SecurePasswordPass : public QWidget
{
    Q_OBJECT

public:
    explicit SecurePasswordPass(QWidget *parent = 0);
    ~SecurePasswordPass();

private slots:
    void on_SecurePasswordPass_CONFIRM_BTN_clicked();

    void on_SecurePasswordPass_RESENDCONFIRMATIONCODE_BTN_clicked();

    void on_SecurePassWord_EXITBTN_clicked();

private:
    Ui::SecurePasswordPass *ui;
        QString             codePtr;
};

#endif // SECUREPASSWORDPASS_H
