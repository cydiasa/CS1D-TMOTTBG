#ifndef OUTPUTLISTDELEGATE_H
#define OUTPUTLISTDELEGATE_H
#include <QItemDelegate>

class outputListDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    outputListDelegate(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
};

#endif // OUTPUTLISTDELEGATE_H
