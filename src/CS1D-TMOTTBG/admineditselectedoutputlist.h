#ifndef ADMINEDITSELECTEDOUTPUTLIST_H
#define ADMINEDITSELECTEDOUTPUTLIST_H

#include <QMainWindow>

namespace Ui {
class AdminEditSelectedOutputList;
}

class AdminEditSelectedOutputList : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminEditSelectedOutputList(QWidget *parent = 0);
    ~AdminEditSelectedOutputList();

private:
    Ui::AdminEditSelectedOutputList *ui;
};

#endif // ADMINEDITSELECTEDOUTPUTLIST_H
