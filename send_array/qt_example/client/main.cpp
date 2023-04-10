#include <QCoreApplication>
#include "coba_lagi.h"
#include <iostream>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tes_array.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using mathtest::MathTest;
using mathtest::MathRequest;
using mathtest::MathReply;
using mathtest::Mathhasil;

class MathTestClient {
    public:
        MathTestClient(std::shared_ptr<Channel> channel) : stub_(MathTest::NewStub(channel)) {}

//    int sendRequest(int a, int b) {
//        MathRequest request;

//        request.set_a(a);
//        request.set_b(b);

//        MathReply reply;

//        ClientContext context;

//        Status status = stub_->sendRequest(&context, request, &reply);

//        if(status.ok()){
//            return reply.result();
//        } else {
//            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
//            return -1;
//        }
//    }
        int sendRequest(int a, int b) {
            MathRequest request;

            request.set_a(a);
            request.set_b(b);

            //MathReply reply;
            Mathhasil hasil;

            ClientContext context;

            //Status status = stub_->sendRequest(&context, request, hasil);
            Status status = stub_->sendarray(&context, request, &hasil);

            if(status.ok()){
                for (int i = 0; i < hasil.result_size(); i++) {
                    int value = hasil.result(i);
                    std::cout << value << std::endl;
                  }
                //return hasil.result();
            } else {
                std::cout << status.error_code() << ": " << status.error_message() << std::endl;
                return -1;
            }
        }

    private:
        std::unique_ptr<MathTest::Stub> stub_;
};

void Run() {
    std::string address("0.0.0.0:5000");
    MathTestClient client(
        grpc::CreateChannel(
            address,
            grpc::InsecureChannelCredentials()
        )
    );

    //int response;

    int a = 5;
    int b = 10;
    client.sendRequest(a,b);

//    response = client.sendRequest(a, b);
//    std::cout << "Answer received: " << a << " * " << b << " = " << response << std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Run();
    return a.exec();
}
