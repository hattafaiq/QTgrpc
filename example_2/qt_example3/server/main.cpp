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
using helloworld::Greeter2;
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

class GreeterServiceImpl final : public Greeter2::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request, HelloReply* reply) override {

    struct t_rute tRuteData;
    struct t_statistik_rotat tStatRotate;
    struct t_setting_param tSetParam;
    struct t_rute tRuteData4;
    struct t_statistik_rotat tStatRotate4;
    struct t_setting_param tSetParam4;

    int ukuran = request->size_all();
    int data_terima = request->datablob().size();
    QVector<int> size_array;
    QByteArray data_parsing[request->size_arr_size()];
    QByteArray data_total = QByteArray::fromStdString(request->datablob());
    int value_1;
    for (int i = 0; i < request->size_arr_size(); i++) {
        int value = request->size_arr(i);
        size_array.push_back(request->size_arr(i));
        //std::cout <<"data ke " << i << " = "<< value << std::endl;
        data_parsing[i].resize(request->size_arr(i));
        if(i==0){
        data_parsing[i]=data_total.left(size_array[i]);
        value_1 = size_array[i];
        }else{
            data_parsing[i]=data_total.mid(size_array[i]*i,size_array[i]);
        }

    }
    qDebug()<<"masuk done ----------------------------------------------->>>";
    for (int i = 0; i < request->size_arr_size(); i++) {
        qDebug() << "ukurannya nih: "<< data_parsing[i].size();
        memcpy(&tRuteData,data_parsing[i],sizeof(t_rute));

        if(tRuteData.id_tipe_param == 410 || tRuteData.id_tipe_param == 420 || tRuteData.id_tipe_param == 430){
            QByteArray dd1 = data_parsing[i].left(sizeof (t_rute));
            QByteArray dd2 = data_parsing[i].mid(sizeof (t_rute),sizeof (t_setting_param));
            QByteArray dd3 = data_parsing[i].mid(sizeof (t_rute)+sizeof (t_setting_param),sizeof (t_statistik_rotat));
            memcpy(&tRuteData, dd1.data(), sizeof(t_rute));
            memcpy(&tSetParam, dd2.data(), sizeof(t_setting_param));
            memcpy(&tStatRotate, dd3.data(), sizeof(t_statistik_rotat));
            qDebug()<< "cek data ke = "<<i;
            qDebug()<<"tipe param:" <<tRuteData.id_tipe_param <<
                         "lines:" << tSetParam.fft_lines <<
                         "fftovrlp:" << tSetParam.fft_overlap<<
                         "fstart:" << tSetParam.freq_start<<
                         "fstop:" << tSetParam.freq_stop;
           qDebug()<< "save done ----------------------------------------------->>> data ke "<<i;
        }
        //else if(fasa){}
    }


//    QByteArray data1 = data_total.left(98474);
//    QByteArray data2 = data_total.mid(98474,98474);
//    QByteArray data3 = data_total.mid(98474+98474,98474);
//    QByteArray data4 = data_total.mid(98474+98474+98474,98474);

//    //qDebug()<<"size data 1" << data1.size();

//    QByteArray dd1 = data1.left(sizeof (t_rute));
//    QByteArray dd2 = data1.mid(sizeof (t_rute),sizeof (t_setting_param));
//    QByteArray dd3 = data1.mid(sizeof (t_rute)+sizeof (t_setting_param),sizeof (t_statistik_rotat));
//    memcpy(&tRuteData, dd1.data(), sizeof(t_rute));
//    memcpy(&tSetParam, dd2.data(), sizeof(t_setting_param));
//    memcpy(&tStatRotate, dd3.data(), sizeof(t_statistik_rotat));
//    qDebug()<<"tipe param:" <<tRuteData.id_tipe_param <<
//             "lines:" << tSetParam.fft_lines <<
//             "fftovrlp:" << tSetParam.fft_overlap<<
//             "fstart:" << tSetParam.freq_start<<
//             "fstop:" << tSetParam.freq_stop;
//    qDebug()<<"-------------------------------------------------";
//    //qDebug()<<"size data 2" << data2.size();
//    //qDebug()<<"size data 3" << data3.size();
//    //qDebug()<<"size data 4" << data4.size();
//    QByteArray d1 = data1.left(sizeof (t_rute));
//    QByteArray d2 = data1.mid(sizeof (t_rute),sizeof (t_setting_param));
//    QByteArray d3 = data1.mid(sizeof (t_rute)+sizeof (t_setting_param),sizeof (t_statistik_rotat));
//    memcpy(&tRuteData4, d1.data(), sizeof(t_rute));
//    memcpy(&tSetParam4, d2.data(), sizeof(t_setting_param));
//    memcpy(&tStatRotate4, d3.data(), sizeof(t_statistik_rotat));
//    qDebug()<<"tipe param:" <<tRuteData4.id_tipe_param <<
//             "lines:" << tSetParam4.fft_lines <<
//             "fftovrlp:" << tSetParam4.fft_overlap<<
//             "fstart:" << tSetParam4.freq_start<<
//             "fstop:" << tSetParam4.freq_stop;
//    qDebug()<<"-------------------------------------------------";
//    reply->set_size_all(request->size_all());
//    std::cout<<"size data total data:" << request->datablob().size() << std::endl;
//    std::cout<<"size:" << request->size_all() << std::endl;

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
