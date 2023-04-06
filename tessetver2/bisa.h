#ifndef BISA_H
#define BISA_H

#include <QObject>


class bisa: public QObject
{
    Q_OBJECT
public:
   explicit bisa(QObject *parent=nullptr);
   virtual ~bisa();
   void mulai();

private:

public slots:


};

#endif // BISA_H
