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
                std::string setting_header = hasil.header();
                std::cout << setting_header << std::endl;

                for (int i = 0; i < hasil.result_float_size(); i++) {
                       float value2 = hasil.result_float(i);
                       std::cout << value2 << std::endl;
                  }

            } else {
                std::cout << status.error_code() << ": " << status.error_message() << std::endl;
                return -1;
            }
        }

    private:
        std::unique_ptr<MathTest::Stub> stub_;
};

#endif // COBA_LAGI_H
