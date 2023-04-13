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

            Mathhasil hasil;

            ClientContext context;

            Status status = stub_->sendarray(&context, request, &hasil);

            if(status.ok()){
               // std::string setting_header = hasil.header();
                if(hasil.header() == "sudah sampai"){
                    std::cout << " -------> " << hasil.header() << " <-------"<< std::endl;
                    request.set_a(2);
                    for (int i = 0; i < hasil.result_float_size(); i++) {
                           float value2 = hasil.result_float(i);
                           //std::cout << "------------------>>" << std::endl;
                           std::cout << value2 << std::endl;
                      }
                    std::cout << "------------------>>" << std::endl;
                }

                if(hasil.header() == "ok mantap"){
                    std::cout << " -------> " <<hasil.header() << " <-------"<< std::endl;
                    request.set_a(2);
                    for (int i = 0; i < hasil.result_float_size(); i++) {
                           float value2 = hasil.result_float(i);
                           //std::cout << "------------------>>" << std::endl;
                           std::cout << value2 << std::endl;
                      }
                    std::cout << "------------------>>" << std::endl;
                }


            } else {
                std::cout << status.error_code() << ": " << status.error_message() << std::endl;
                return -1;
            }
        }

    private:
        std::unique_ptr<MathTest::Stub> stub_;
};


struct t_data{
    char dataku[100];
};

#define BESAR_PAKET 400

struct t_rute {
    unsigned short 	flag;				 	// 2  sudah di trap atau belum
    unsigned short	point_ke;         		// 2  baru ditambahkan
    char 			inisial[10];     	  	// 10
    short  			sudut_fasa;     	  	// 2
    unsigned char	kanal;					// 1  20 Jan 2011, sofhaliza sudah sejak 11 Okt 2010
    unsigned char 	mask;					// 1  20 jan 2011
    short			id_tipe_param;    	    // 2  (di haliza ==> tipe_data)
    unsigned short	id_param;         		// 2  (2014, ini menjadi id_n_param), id_aset
    unsigned short	id_rute;				// 2  total = 38 bytes	--> id_rute (yg bener id_rute)
    unsigned short 	id_dikirim;				// 2  ditambahkan 17 juli, supaya satu rute bisa dipakai beberapa kali
};

struct t_kom_dat {						     // struk paket komunikasi
    char 		kpl[10];
    char 		iden[6];
    struct t_rute rute;                 //yg dipake inisial aja
    unsigned short 	data[ BESAR_PAKET ];
    unsigned short	cek[10];
};

#endif // COBA_LAGI_H
