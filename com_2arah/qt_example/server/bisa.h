#ifndef BISA_H
#define BISA_H

#include <QObject>
#include <iostream>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tes_array.grpc.pb.h"
#include "tes_array.pb.h"

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
