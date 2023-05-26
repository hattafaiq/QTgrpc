#include <QCoreApplication>
#include "bisa.h"
#include <grpcpp/grpcpp.h>
#include <string>
#include "helloworld.grpc.pb.h"
#include "helloworld.pb.h"
#include <QDebug>
#include <iostream>
#include <memory>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using helloworld::Greeter;
using helloworld::HelloReply;
using helloworld::HelloRequest;

ABSL_FLAG(uint16_t, port, 5000, "Server port for the service");

std::string convertToString(char* a, int size)
{
    int i;
    std::string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

class GreeterServiceImpl final : public Greeter::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request, HelloReply* reply) override {

    std::string prefix("Hello ");
    reply->set_message(prefix + request->name());
    bisa bis;
    QString filename = "haliza_lite.dbb";
    QString con_name;
    con_name = QString("LOC_DB%1").arg(1);
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
    db.setDatabaseName(filename);
    QByteArray data1;
    QByteArray hard;
    QString nama_aset;
   // hard.resize(10000000);
    int i;
    for(i=1; i<1000; i++){
        if(!db.open())
        {
            qDebug()<<"db gak kebukak";
            //return;
        }
        else
        {
            QSqlQuery buka(db);
            buka.prepare("select * from aset where id=:id");
            buka.bindValue(":id", i);
            if(!buka.exec()){

            }
            else{
                while( buka.next() )
                {
                    int kind = buka.value("id_kind").toInt();
                    if(kind == 100){qDebug()<<nama_aset << "first hirarki";}
                    else if(kind == 800){  }
                    else if(kind == 810){qDebug()<<nama_aset << "\n -viro-";}
                    nama_aset = buka.value("name").toString();
                    qDebug()<<nama_aset << "------";
                }
            }
        }
    }
    std::string stdString2(hard.constData(), hard.length());
    reply->set_datablob(stdString2);
    std::cout << "Req " << request->name() << std::endl;
    qDebug()<<"done";
    return Status::OK;
  }
};

void RunServer(uint16_t port) {

    ServerBuilder builder;
    // Listen on the given address without any authentication mechanism.

    builder.SetMaxSendMessageSize(1024 * 1024 * 1024);
    builder.SetMaxMessageSize(1024 * 1024 * 1024);
    builder.SetMaxReceiveMessageSize(1024 * 1024 * 1024);
    std::string server_address = absl::StrFormat("0.0.0.0:%d", port);
    GreeterServiceImpl service;

    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  RunServer(absl::GetFlag(FLAGS_port));
  return 0;
}
