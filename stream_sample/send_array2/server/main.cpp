#include <QCoreApplication>
#include "bisa.h"
#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>
#include <string>

//#include "helper.h"

#include <grpc/grpc.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>

#include "route_guide.grpc.pb.h"
#include "route_guide.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;
//using routeguide::Feature;
using routeguide::Point;
using routeguide::RouteGuide;
using routeguide::RouteNote;
using std::chrono::system_clock;

using routeguide::Routekomdat;
using routeguide::Routebaru;

class RouteGuideImpl final : public RouteGuide::Service {
 public:
  explicit RouteGuideImpl(const std::string& db);
    Status komdat(ServerContext* context,ServerReaderWriter<Routekomdat, Routekomdat>* stream) override {
    Routekomdat note;
    while (stream->Read(&note)) {
      std::unique_lock<std::mutex> lock(mu_);
        std::cout << "--- " << note.data() <<std::endl;
        if(note.data()==1){
          for (const Routekomdat& n : received_notes_k) {
              if (n.data() == 1) {
                stream->Write(n);
                std::cout << "cek1- "<<n.header() <<std::endl;
                }
            }
        }
        received_notes_k.push_back(note);
    }
    std::cout << "----------------end cek \n"<<std::endl;
    received_notes_k.clear();
    return Status::OK;
}

private:
  std::mutex mu_;
  std::vector<RouteNote> received_notes_;
  std::vector<Routekomdat> received_notes_k;
};

void RunServer(const std::string& db_path) {
  std::string server_address("0.0.0.0:50051");
  RouteGuideImpl service(db_path);

  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();
}

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);
    std::string db = "home/fh/grpc/proto_1/qt_example/stream_sample/send_array2/server/";
    RunServer(db);
    return 0;
    //return a.exec();
}
