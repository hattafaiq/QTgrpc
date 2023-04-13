#include "coba_lagi.h"

coba_lagi::coba_lagi(QObject *parent) : QObject(parent)
{

}

coba_lagi::~coba_lagi()
{

}

void coba_lagi::Test()
{
    std::string address("0.0.0.0:5000");
    MathTestClient client(grpc::CreateChannel(address,grpc::InsecureChannelCredentials()));
    //int response;
    int a = 0;
    int b = 10;
    client.sendRequest(a,b);
    client.Responce(a,b);
}

int MathTestClient::sendRequest(int a, int b)
{
    MathRequest request;
    request.set_a(a);
    std::int32_t anya = request.a();
    std::cout << "anya:" << anya << std::endl;

    Mathhasil hasil;
    ClientContext context;
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

int MathTestClient::Responce(int a, int b)
{
    if(a==2){
        qDebug()<<"oke sudah masuk datanya";
    }
    else{
        qDebug()<<"belum terbalas";
    }
}
