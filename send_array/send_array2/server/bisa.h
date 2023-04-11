#ifndef BISA_H
#define BISA_H

#include <QObject>
#include <iostream>
#include <grpcpp/grpcpp.h>
#include <string>
#include "tes_array.grpc.pb.h"
#include "tes_array.pb.h"

class bisa: public QObject
{
    Q_OBJECT
public:
   explicit bisa(QObject *parent=nullptr);
   virtual ~bisa();
   void mulai();

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

#endif // BISA_H
//float data_baru[] ={ 1.2	,
//2.2	,
//3.2	,
//4.2	,
//5.2	,
//6.2	,
//7.2	,
//8.2	,
//9.2	,
//10.2	,
//11.2	,
//12.2	,
//13.2	,
//14.2	,
//15.2	,
//16.2	,
//17.2	,
//18.2	,
//19.2	,
//20.2	,
//21.2	,
//22.2	,
//23.2	,
//24.2	,
//25.2	,
//26.2	,
//27.2	,
//28.2	,
//29.2	,
//30.2	,
//31.2	,
//32.2	,
//33.2	,
//34.2	,
//35.2	,
//36.2	,
//37.2	,
//38.2	,
//39.2	,
//40.2	,
//41.2	,
//42.2	,
//43.2	,
//44.2	,
//45.2	,
//46.2	,
//47.2	,
//48.2	,
//49.2	,
//50.2	,
//51.2	,
//52.2	,
//53.2	,
//54.2	,
//55.2	,
//56.2	,
//57.2	,
//58.2	,
//59.2	,
//60.2	,
//61.2	,
//62.2	,
//63.2	,
//64.2	,
//65.2	,
//66.2	,
//67.2	,
//68.2	,
//69.2	,
//70.2	,
//71.2	,
//72.2	,
//73.2	,
//74.2	,
//75.2	,
//76.2	,
//77.2	,
//78.2	,
//79.2	,
//80.2	,
//81.2	,
//82.2	,
//83.2	,
//84.2	,
//85.2	,
//86.2	,
//87.2	,
//88.2	,
//89.2	,
//90.2	,
//91.2	,
//92.2	,
//93.2	,
//94.2	,
//95.2	,
//96.2	,
//97.2	,
//98.2	,
//99.2	,
//100.2};
