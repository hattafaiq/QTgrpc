#ifndef COBA_LAGI_H
#define COBA_LAGI_H
#include <QObject>
#include <QDebug>
#include <iostream>

class coba_lagi : public QObject
{
    Q_OBJECT
public:
    explicit coba_lagi(QObject *parent = nullptr);
    ~coba_lagi();
    void Test();

public slots:

private:

};

#endif // COBA_LAGI_H
