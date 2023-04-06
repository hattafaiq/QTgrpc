#ifndef BISA_H
#define BISA_H

#include <QObject>
#include <iostream>
#include "helloworld.grpc.pb.h"
#include <memory>
#include <string>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

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
