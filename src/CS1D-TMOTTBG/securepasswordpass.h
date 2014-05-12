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

private:
    Ui::SecurePasswordPass *ui;
};

#endif // SECUREPASSWORDPASS_H
