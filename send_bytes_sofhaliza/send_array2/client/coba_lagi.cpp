#include "coba_lagi.h"

coba_lagi::coba_lagi(QObject *parent) : QObject(parent)
{

}

coba_lagi::~coba_lagi()
{

}

void coba_lagi::Test()
{
    //std::string address("192.168.20.62:5000");
    std::string address("192.168.20.113:5000");
    MathTestClient client(grpc::CreateChannel(address,grpc::InsecureChannelCredentials()));
    //int response;
    int a = 1;
    int b = 10;
    client.sendRequest(a,b);
    //client.sendRequest(2,b);
}


