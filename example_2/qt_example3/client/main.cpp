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
      : stub_(Greeter2::NewStub(channel)) {}
   std::string SayHello(const std::string& user) {
    // Data we are sending to the server.

    //grpc::ChannelArguments
       QString filename = "tes_viro.dbb";
       QString con_name;
       con_name = QString("LOC_DB%1").arg(1);
       QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
       db.setDatabaseName(filename);
       QByteArray buffer_data;
       QByteArray hard;
       QString nama_aset;

       std::vector<int32_t> array_size_data;

       if(!db.open())
       {
           qDebug()<<"db gak kebukak";
           //return;
       }
       else
       {
           QSqlQuery buka(db);
           QVector<int> data = {1,2,3,4};
           int jumlah = 4;
           for(int i=0; i<jumlah; i++){
               buka.prepare("select * from data_410_tipe where id=:id");
               buka.bindValue(":id", data[i]);
               if(!buka.exec()){
                   qDebug()<<"gak buka";
               }
               else{
                   while( buka.next() )
                   {
                       QByteArray data1 = buka.value("data").toByteArray();
                       qDebug()<<"data size:"<<data1.size();
                       array_size_data.push_back(data1.size());
                       buffer_data.push_back(data1);
                   }
               }
           }
       }
   std::string stdString2(buffer_data.constData(), buffer_data.length());

    HelloRequest request;
    request.set_datablob(stdString2);
    request.set_size_all(request.datablob().size());
    for(const auto& val : array_size_data){
        request.add_size_arr(val);
    }
    qDebug()<<"----------------------------------------------";
    std::cout << request.name() << std::endl;
    std::cout << request.datablob().size() << std::endl;

    HelloReply reply;

    ClientContext context;

    Status status = stub_->SayHello(&context,request ,&reply);

    if (status.ok()) {
        std::cout << request.name() << std::endl;
        std::cout << request.datablob().size() << std::endl;
      return reply.name();
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      return "RPC failed";
    }


  }

 private:
  std::unique_ptr<Greeter2::Stub> stub_;
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
