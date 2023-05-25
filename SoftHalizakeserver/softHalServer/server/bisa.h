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
#include "helloworld.grpc.pb.h"
#include "helloworld.pb.h"

#define FFT_LINES_DISABLE   0
#define FFT_LINES_50        1
#define FFT_LINES_100       2
#define FFT_LINES_200       3
#define FFT_LINES_400       4
#define FFT_LINES_800       5
#define FFT_LINES_1600      6
#define FFT_LINES_3200      7
#define FFT_LINES_6400      8
#define FFT_LINES_12800     9

class bisa: public QObject
{
    Q_OBJECT
public:
   explicit bisa(QObject *parent=nullptr);
   virtual ~bisa();
   void mulai();
   void check_db_exist(QString filename, int count_db, QByteArray data);
   void load_database(QString filename, int count_db, QByteArray data);
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

struct t_kom_dat_new {						     // struk paket komunikasi
        char 		kpl[10];
        char 		iden[6];
        struct t_rute rute;                 //yg dipake inisial aja
        unsigned short 	data[ /*BESAR_PAKET*/ 30];
        unsigned short	cek[10];
};

struct t_info_rotat {
        float 	peak;				// tertinggi pada domain frekuensi
        float	overall;			// harga overall pada domain waktu (sesuai dengan RMS, PP atau P)
        float	f_maks;				// frekuensi saat peak.

        unsigned short keluaran;
        unsigned short fft_point;  //lengt data // lines parameter
        unsigned short low_cut;     //f_stop
        unsigned short high_pass;   //f_start
        unsigned short averages;
        unsigned short window;
        unsigned short PP;

        /* 16 sept 2009, model integrasi
                1 untuk digital integration
                2 untuk analog integration (IIR filter)
        */
        unsigned short integrasi;

        /* 19 Sept 2009, skala auto / tidak */
        unsigned short skala;

        /* 20 sept 2009, faktor kalibrasi */
        float accel_A;
        float accel_B;

        /* 29 Okt 2009 */
        unsigned short satuan;		// metrik, inggris
        unsigned short sat_frek;	// Hz, CPM, RPM
        unsigned short skala_log;	// log, linear
        unsigned short cursor;		// satu saja atau harmonik
        unsigned short screen;		// spektrum saja, + waveform

        /* 31 Okt 2009 */
        float f_perlines;		// f_perlines sesungguhnya dari sampling rate sesungguhnya

        /* 2 Nov 2009 */
        short cur_avg;
        float faktor_default;		// faktor hanning, hamming dll
        float reff_rpm;

        /* 4 Nov 2009 */
        float mean;
        float mean_asli;			// raw data sebelum dikali faktor kalibrasi
        float f_scaling;			// pengaruh scalling

        /* 22 Mar 2010 */
        int anal_gain;				// setting analog gain pada LTC1564

        /* 21 Juli 2010 */
        float f_MA;					// milivolt maksimum
        float f_MI;

        /* 10 Agt 2010 */
        unsigned long long 	tim;	/* waktu saat data disimpan, NOTE : ini sering problem antar platform
                                untuk ARM/Haliza, WIndows 32/64 dan Linux 32/64
                                pe Sept 2016, diganti ke long long

                                tadinya long
                                */
        unsigned char phase;	// 2 = disable, 1 = enable
        unsigned char kanal;	//  0/1 => 1 kanal, 2 = 2 kanal.

        /* 20 MEI 2013 WARN WARN, mungkin tidak cocok dengan database/sofHaliza */
        int custom_srate;           // sampling rate custom
        int overlap;                // maksimum 100 (100 persen overlap)

        char mode_fase;              // 1 = 360 dan 2 = 720
        char sumber_fase;            // 0 = pickup, 1 = ch1, 2 = ch2
        char band_fase;
        char flag_valid;             // valid strukturnya
        float beda_fase;             // beda fase yang terukur

        char show_kurva_PU;     /* kurva pickup dimunculkan */
        unsigned int 	dummy;
        unsigned int 	dummy2;


#if 1
        /* 18 Mei 2011, tentang batas alarm dan batas fault juga bearing */
        float   alarm;
        float   fault;

        char    bearing_maker[64];
        char    bearing_model[64];
        float   bpfo;
        float   bpfi;
        float   ftf;
        float   bsf;
#endif
        /* 27 Okt 2014, di buat 4 versi Vel, Acc, Disp, Volt */
        //unsigned short keluaran;
};

struct t_statistik_rotat{
    int reff_rpm;       //reff rpm
    int dec_f;	        // volt
    int point;		// volt
    float vel_ampl;		// mm/s - Peak freq dominan
    float vel_frekDom;		// mm/s - RMS freq dominan
    float vel_overall_peak;     // mm/s overal dari spektrum dlm peak
    float vel_overall_rms;      // mm/s overal dari spektrum dlm rms
//    float rpm;                  // vel freq dominan(hz)*60
    float env_wf_peak;          // g's
    float env_wf_rms;           // g's
    float env_wf_cf;		// ratio (env_peak dibagi env_rms)
    float temp;                 // temp from dual sensor accelerometer-temp
    int unit_temp; 		// UNIT_CELCIUS or UNIT_FAHRENHEIT (1000 , 1100)
    unsigned long long timestamp;   //in epoch time second
};

struct t_setting_param {
    int     id_tipe_param;
#if _TTY_POSIX_
    u_char  tipe_tipikal;
    u_char  sumber_data;
    u_char  power_icp;
    u_char  coupling;
    u_char  window_filter;
    u_char  enable_hf_envelope;
    u_char  enable_trigger;
    u_char  integrasi;
    u_char  save_time_domain;
    u_char  save_freq_domain;
    u_char  data_output;
    u_char  amplitude_info;
    u_char  set_gain;

    u_char  fft_overlap;            /* dalam %, misalnya 50 berarti 50 % */
    u_char  skala_y;
    u_char  skala_x;
    u_char  unit_x;
    u_char  tipe_display;
#else //_TTY_WIN_
    unsigned char  tipe_tipikal;
    unsigned char  sumber_data;
    unsigned char  power_icp;
    unsigned char  coupling;
    unsigned char  window_filter;
    unsigned char  enable_hf_envelope;
    unsigned char  enable_trigger;
    unsigned char  integrasi;
    unsigned char  save_time_domain;
    unsigned char  save_freq_domain;
    unsigned char  data_output;
    unsigned char  amplitude_info;
    unsigned char  set_gain;

    unsigned char  fft_overlap;            /* dalam %, misalnya 50 berarti 50 % */
    unsigned char  skala_y;
    unsigned char  skala_x;
    unsigned char  unit_x;
    unsigned char  tipe_display;
#endif

    int     kanal;
    int     sampling_rate;
    int     num_siklus_simpan;      /* jumlah period disimpan */
    int     num_average;
    int     fft_lines;
    int     unit;                   /*Satuan*/
    int     multipeaks;
    int     sideband;

    double  freq_start;
    double  freq_stop;
    double  freq_envelope;
    double  sensitivity;        /* dalam satuan mV/unit*/
};

struct t_dd_rotat {
    float freq1, freq2;
    float amp1, amp2;
    float beda_fase; //beda fasa dual kanal
    bool lead_or_lag;
    float vpp1, vpp2;
    float vrms1, vrms2;
    int tipe;           //
    unsigned int id_data;
    float fasa1; //beda fasa ch1 dengan PU
    float fasa2; //beda fasa ch2 dengan PU
    bool lead_or_lag1; //leading/lagging ch1
    bool lead_or_lag2; //leading/lagging ch2
    //ditambhakan dan disesuaikan ke haliza
    unsigned long long timestamp; //diganti masukkan ke kolom sendiri aja

};

//struct dijadiin char terus jadi string?

#endif // BISA_H
