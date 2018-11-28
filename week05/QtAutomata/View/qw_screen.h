#ifndef QW_SCREEN_H
#define QW_SCREEN_H

#include <QWidget>

class QW_Screen : public QWidget
{
    Q_OBJECT
public:
    explicit QW_Screen(QWidget *parent = 0);

signals:

public slots:
private:
    void paintEvent(QPaintEvent* event) override;

};

#endif // QW_SCREEN_H
