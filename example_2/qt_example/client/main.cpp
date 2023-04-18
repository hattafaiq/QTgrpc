#include <QCoreApplication>
#include "coba_lagi.h"
#include <iostream>
#include <memory>
#include <string>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "helloworld.grpc.pb.h"
#include "helloworld.pb.h"

ABSL_FLAG(std::string, target, "192.168.20.62:5000", "Server address");

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using helloworld::Greeter;
using helloworld::HelloReply;
using helloworld::HelloRequest;

class GreeterClient {
 public:
  GreeterClient(std::shared_ptr<Channel> channel)
      : stub_(Greeter::NewStub(channel)) {}

  // Assembles the client's payload, sends it and presents the response back
  // from the server.
   std::string SayHello(const std::string& user) {
    // Data we are sending to the server.
    HelloRequest request;
    request.set_name(user);

    // Container for the data we expect from the server.
    HelloReply reply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;

    // The actual RPC.
    Status status = stub_->SayHello(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
       // std::cout << "data: "<< reply.dataku() << "|size:"<< sizeof(reply.dataku())<< std::endl;
       // std::string dataku = reply.dataku();

//        float floatArray[100];
//        const char *cstr = dataku.c_str();

        //memcpy(floatArray,cstr,100*sizeof(float));
        for(int i=0; i<reply.datarr_size(); ++i) {
        std::cout << reply.datarr(i) << std::endl;
        }
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
    GreeterClient greeter(
    grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
    std::string user("world");
    std::string reply = greeter.SayHello(user);
    std::cout << "Greeter received: " << reply << std::endl;
    // return 0;
    return a.exec();
}
