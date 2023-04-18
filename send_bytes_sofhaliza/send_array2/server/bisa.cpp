////////
/// protobuf versi 3.21.12
/// grcp versi 1.53.0
///
float data_baru1[] = {0.062790566364915	,
                      0.125333326680626	,
                      0.187381452876653	,
                      0.248690068980324	,
                      0.309017217531811	,
                      0.368124814481108	,
                      0.42577958879841	,
                      0.481754003089672	,
                      0.535827151584088	,
                      0.587785631949555	,
                      0.637424387495435	,
                      0.684547516438843	,
                      0.728969045040638	,
                      0.770513661559907	,
                      0.809017408130342	,
                      0.844328327828005	,
                      0.876307064376776	,
                      0.904827412124732	,
                      0.929776814120941	,
                      0.951056806326987	,
                      0.968583406210126	,
                      0.982287444184474	,
                      0.992114836592162	,
                      0.99802679914715	,
                      0.999999999999312	,
                      0.998026651814724	,
                      0.992114542508765	,
                      0.98228700451072	,
                      0.96858282268121	,
                      0.951056081245833	,
                      0.929775950349119	,
                      0.904826413071159	,
                      0.876305933984266	,
                      0.844327070557707	,
                      0.809016028944135	,
                      0.770512165900817	,
                      0.728967438811358	,
                      0.684545805978435	,
                      0.637422579554315	,
                      0.587783733662851	,
                      0.535825170443482	,
                      0.481751946913831	,
                      0.425777465702135	,
                      0.368122632843301	,
                      0.309014985962413	,
                      0.248687796286333	,
                      0.187379148027367	,
                      0.125330998772247	,
                      0.062788224584647	,
                      -2.3464102068968E-06	,
                      -0.062792908144838	,
                      -0.125335654588315	,
                      -0.187383757724906	,
                      -0.248692341672945	,
                      -0.309019449099507	,
                      -0.368126996116888	,
                      -0.425781711892342	,
                      -0.48175605926286	    ,
                      -0.535829132721744	,
                      -0.587787530233023	,
                      -0.637426195433045	,
                      -0.684549226895482	,
                      -0.728970651265904	,
                      -0.770515157214754	,
                      -0.809018787312094	,
                      -0.844329585093654	,
                      -0.876308194764461	,
                      -0.904828411173324	,
                      -0.929777677887644	,
                      -0.951057531402904	,
                      -0.96858398973371	    ,
                      -0.982287883852819	,
                      -0.992115130670097	,
                      -0.998026946474081	,
                      -0.999999999993806	,
                      -0.998026504476804	,
                      -0.992114248419906	,
                      -0.982286564831558	,
                      -0.968582239146961	,
                      -0.951055356159444	,
                      -0.929775086572177	,
                      -0.904825414012604	,
                      -0.876304803586931	,
                      -0.844325813282761	,
                      -0.809014649753475	,
                      -0.770510670237486	,
                      -0.728965832578065	,
                      -0.684544095514258	,
                      -0.637420771609686	,
                      -0.587781835372911	,
                      -0.535823189299925	,
                      -0.481749890735338	,
                      -0.425775342603515	,
                      -0.368120451203467	,
                      -0.309012754391314	,
                      -0.248685523590973	,
                      -0.187376843177051	,
                      -0.125328670863178	,
                      -0.062785882804033	};

#include "bisa.h"
#include <QDebug>
bisa::bisa(QObject *parent) : QObject(parent)
{
    check_db_exist("cek_onrute.dbb", 1);
    using grpc::Server;
    using grpc::ServerBuilder;
    using grpc::ServerContext;
    using grpc::Status;

    using mathtest::MathTest;
    using mathtest::MathRequest;
    using mathtest::MathReply;
    using mathtest::Mathhasil;
    using mathtest::RecBro;
    using mathtest::Datablob;

    class MathServiceImplementation final : public MathTest::Service {
//    Status softhaliza(ServerContext* context,const RecBro* request, datablob* respon)
//        override {

//        char array [100*sizeof(float)];
//        memcpy(array, &data_baru1, 100*sizeof(float));
//        std::cout << "data:"<< array << std::endl;
//        //PR nya dari char array terus ke byte? apa gmn ?
//        std::cout << "req orang:"<<request->header() << std::endl;
//        if(request->header() == "minta data"){
//            respon->set_header("kirim data");
//            respon->set_totalpaket(0);
//            respon->set_paket_ke(0);
//            respon->set_tipe_data(0);
//            respon->set_param(0);
//            respon->set_timeepoch(0);
//            respon->set_param(0);
//            respon->set_dataku(array);
//            std::cout << "dataku:"<< respon->dataku() << std::endl;
//            std::cout << " -------> " << respon->header() << " <------- \n"<< std::endl;
//            std::cout << "kirim-kirim terus \n" << std::endl;
//            }
//        respon->set_header("selesai");
//        std::cout << " -------> " << respon->header() << " <------- \n"<< std::endl;
//        std::cout << "horee sudah selesai kirim data-> \n";

//        return Status::OK;
//        }
    Status SendRequest(ServerContext* context,const MathRequest* request, MathReply* respon)
    override {
        int as = request->a();
        int bs = request->b();
        std::cout << " req-------> a:" << request->a() << "b:"<<request->b()<< " <------- \n"<< std::endl;
        int hasil = as*bs;
        respon->set_result(hasil);

    }
    };



    std::string address("192.168.20.62:5000");
    MathServiceImplementation service;

    ServerBuilder builder;

    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on port: " << address << std::endl;
    server->Wait();
}

bisa::~bisa()
{

}

void bisa::mulai()
{

}

void bisa::check_db_exist(QString filename, int count_db)
{
    QFile file("cek_onrute.dbb");

    if(file.exists()== true)
    {
        //QFileInfo finfo(file.fileName());
        this->load_database("cek_onrute.dbb",count_db++);
    }
    else
    {
        //this->create_database(filename + ".ovm",count_db);
        return;
    }
}

void bisa::load_database(QString filename, int count_db)
{
    QString con_name;
    con_name = QString("LOC_DB%1").arg(count_db);
    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
    db.setDatabaseName(filename);

    if(!db.open())
    {
        qDebug()<<"db gak kebukak";
        return;
    }
    else
    {
        qDebug()<<"db buka";
    }

    QSqlQuery c_data(db);
  //  proses_q(&c_data, "select id_kind from aset where id = %d", 2);


}

//int proses_q( QSqlQuery *q, const char *s, ...)
//{
//    QSqlError er;
//    va_list args;

//    va_start (args, s);

//       /* For this to work, printbuffer must be larger than
//        * anything we ever want to print.
//        */
//    vsprintf (buf_command, s, args);
//    va_end (args);

////    qDebug() << __PRETTY_FUNCTION__ << buf_command;
//    //debug("%s(): %s",__FUNCTION__, buf_command );

//    if (!q->exec( buf_command ))
//    {
//        er = q->lastError();
//        qDebug() << "(debug 58) Querry Error : Data not Found! 1";
//        qDebug("%s(): ERR : %s", __FUNCTION__, er.text().toUtf8().data());
//        return -1;
//    }
//    else
//    {
//        /* untuk SQLITE harus manual ditunjukkan ke first sebelum bisa dipakai */
////        q->first();

//        if(!q->first()){
//            /* handler if query doesn't exist */
//            qDebug() << "(debug 58) Querry Error : Data not Found! 2" << q->lastQuery();
//            setting.dat_avb = 0;
//        }
//        else{
////            qDebug() << "(debug 58) Data Found!";
//            setting.dat_avb = 1;
//        }

//        /* SQLITE size juga pasti akan -1 */
//        //debug("%s(): OK, %d row", __FUNCTION__, q->size());
//    }
//    return 0;
//}
