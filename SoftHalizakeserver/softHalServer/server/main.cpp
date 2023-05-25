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

int decode_fft_lines(int setting_lines )
{
    if ( setting_lines == FFT_LINES_DISABLE)
        return 0;
    else if (setting_lines == FFT_LINES_50)
        return 50;
    else if (setting_lines == FFT_LINES_100)
        return 100;
    else if (setting_lines == FFT_LINES_200)
        return 200;
    else if (setting_lines == FFT_LINES_400)
        return 400;
    else if (setting_lines == FFT_LINES_800)
        return 800;
    else if (setting_lines == FFT_LINES_1600)
        return 1600;
    else if (setting_lines == FFT_LINES_3200)
        return 3200;
    else if (setting_lines == FFT_LINES_6400)
        return 6400;
    else if (setting_lines == FFT_LINES_12800)
        return 12800;
    else
        return 0;
}

class GreeterServiceImpl final : public Greeter::Service {
  Status SayHello(ServerContext* context, const HelloRequest* request, HelloReply* reply) override {

    std::string prefix("Hello ");
    reply->set_message(prefix + request->name());
    bisa bis;
    QString filename = "data_grpcTest.dbb";
    QString con_name;
    con_name = QString("LOC_DB%1").arg(1);
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
    db.setDatabaseName(filename);
    QByteArray data1;
    if(!db.open())
    {
        qDebug()<<"db gak kebukak";
        //return;
    }
    else
    {
        qDebug()<<"db buka";
        QSqlQuery buka(db);
       // buka.prepare("select data from data_41_tipe where id=:id");
        buka.prepare("select * from data_41_tipe where id_param=:id_param");
        buka.bindValue(":id_param", 1);
        if(!buka.exec()){
            qDebug()<<"data kosong--------------------------------";
        }
        else{
            while( buka.next() )
            {
                data1 = buka.value("data").toByteArray();
                qDebug()<<"---------------------------------------";
                qDebug()<< data1.size();
            }
        }
    }
    struct t_rute *ruteku;
    struct t_kom_dat komdat;
    struct t_info_rotat t_rotat;
    struct t_setting_param *t_param;
    struct t_statistik_rotat *t_stat;
    struct t_dd_rotat t_dd;
    /// | t_rute (26) | t_set_param (88) --> dimasukkan ke buffer t_kom_dat.data (800) | DATA (Wave (point) + Spektrum (lines)) |
    int sizeRute = sizeof (t_rute);
    int sizeParam = sizeof (t_setting_param);
    int sizeStatistik = sizeof (t_statistik_rotat);
    QByteArray a = data1.left(sizeRute);
    ruteku = (struct t_rute *) a.data();
    qDebug() << "id_tipe: " <<ruteku->id_tipe_param;

    QByteArray dd1 = data1.mid(sizeRute,sizeParam);
    t_param = (struct t_setting_param *) dd1.data();
    qDebug() << "fft_line: " <<decode_fft_lines(t_param->fft_lines);

    QByteArray dd2 = data1.mid(sizeRute+sizeParam,sizeStatistik);
    t_stat = (struct t_statistik_rotat *) dd2.data();
    qDebug() << "timestamp:" << t_stat->timestamp<< "\n" <<
                "rms:" << t_stat->vel_overall_rms << "\n" <<
                "peak: " << t_stat->vel_overall_peak << "\n";
    qDebug() <<"--------------------------------------";
    qDebug() << "timestamp:" << t_stat->timestamp<< "\n" <<
                "rms:" << t_stat->vel_overall_rms << "\n" <<
                "peak: " << t_stat->vel_overall_peak << "\n";
    int sizeData = (decode_fft_lines(t_param->fft_lines) * 2.56 *4) + (decode_fft_lines(t_param->fft_lines) *4);
    qDebug()<<"test size data" << sizeData;
    QByteArray ddRotate = data1.mid(sizeof (t_rute)+sizeof (komdat.data)+ sizeData, sizeof(t_dd_rotat));
    memcpy(&t_dd, (struct t_dd_rotat*)ddRotate.data(), sizeof(t_dd_rotat));
    /*qDebug() << "rms: " << t_dd.vrms1 <<"\"<<
                "peak: " << t_dd*/
    //lanjut bongkar isi tdd nanti buat patokan kalo dari ftdi itu peaknya berapa




    //    char *p_data;
//    p_data = ( char *) data1.data();
//    memcpy( (char *) &komdat.data, &p_data[sizeof (komdat.rute)], sizeof (komdat.data));
//    memcpy( (char *) &t_rotat, &komdat.data, sizeof (t_rotat));

//    QByteArray dd2 = data.mid(sizeRute+sizeSetParam,sizeStatistik);
//    _tStatRotat = (struct t_statistik_rotat *) dd2.data();
    // _tRuteData = (struct t_rute *) dd.data();
    //memcpy( (char *) &komdat.data, (char *) &data1[sizeof(komdat.rute)], sizeof(komdat.data));   //harusnya sebesar t_info, diganti make char baru
    //memcpy( (char *) &info_rot, &drute.data[0], sizeof (info_rot));

//    std::string stdString(data1.constData(), data1.length());
//    reply->set_datablob(stdString);
//    qDebug()<<"done";
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
