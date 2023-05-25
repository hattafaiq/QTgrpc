#include <QCoreApplication>
#include "coba_lagi.h"
#include <iostream>
#include <memory>
#include <string>
#include "grpcpp/support/channel_arguments.h"
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "helloworld.grpc.pb.h"
#include "helloworld.pb.h"

ABSL_FLAG(std::string, target, "192.168.20.62:5000", "Server address");

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::ChannelArguments;
using helloworld::Greeter2;
using helloworld::HelloReply;
using helloworld::HelloRequest;


class GreeterClient {
 public:
  GreeterClient(std::shared_ptr<Channel> channel)
      : stub_(Greeter::NewStub(channel)) {}
   std::string SayHello(const std::string& user) {
    // Data we are sending to the server.

    //grpc::ChannelArguments
       QString filename = "haliza_lite.dbb";
       QString con_name;
       con_name = QString("LOC_DB%1").arg(1);
       QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
       db.setDatabaseName(filename);
       QByteArray data1;
       QByteArray hard;
       QString nama_aset;

       int i=1;
           if(!db.open())
           {
               qDebug()<<"db gak kebukak";
               //return;
           }
           else
           {
               //qDebug()<<"db buka";
               QSqlQuery buka(db);
              // buka.prepare("select data from data_41_tipe where id=:id");
               buka.prepare("select * from aset where id=:id");
               buka.bindValue(":id", i);
               if(!buka.exec()){
                   qDebug()<<"gak buka";
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

    HelloRequest request;
    request.set_name(user);

    HelloReply reply;
    ClientContext context;

    Status status = stub_->SayHello(&context, request, &reply);

    if (status.ok()) {
        std::cout << reply.datablob().size() << std::endl;
      return reply.message();
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC failed";
    }
  }

 private:
  std::unique_ptr<Greeter::Stub> stub_;
};

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    absl::ParseCommandLine(argc, argv);
    std::string target_str = absl::GetFlag(FLAGS_target);
    grpc::ChannelArguments ch_args;
    ch_args.SetMaxReceiveMessageSize(-1);

    GreeterClient greeter( grpc::CreateCustomChannel (target_str, grpc::InsecureChannelCredentials(), ch_args));

    std::string user("world");
    std::string reply = greeter.SayHello(user);

    std::cout << "Greeter received: " << reply << std::endl;
    return a.exec();
}
