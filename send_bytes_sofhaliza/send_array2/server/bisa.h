#ifndef BISA_H
#define BISA_H

#include <QObject>
#include <iostream>
#include <grpcpp/grpcpp.h>
#include <string>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "tes_array.grpc.pb.h"
#include "tes_array.pb.h"

class bisa: public QObject
{
    Q_OBJECT
public:
   explicit bisa(QObject *parent=nullptr);
   virtual ~bisa();
   void mulai();
   void check_db_exist(QString filename, int count_db);
   void load_database(QString filename, int count_db);
   //void proses_q( QSqlQuery *q, const char *s, ...);

private:

public slots:
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

//struct dijadiin char terus jadi string?

#endif // BISA_H
