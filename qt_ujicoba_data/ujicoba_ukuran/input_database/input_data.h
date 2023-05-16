#ifndef INPUT_DATA_H
#define INPUT_DATA_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class input_data
{
public:
    input_data();
    void check_db_exist(QString filename, int count_db, QByteArray data);
    void load_database(QString filename, int count_db, QByteArray data);
    float data_get[10][1000];
    float data_array[1000];
    void masuk();
    void save_database_waveform_harian(QSqlDatabase db,QByteArray bb1[],int num, int fmax, int ref_rpm, int safe_to_save_ch[]);
};

#endif // INPUT_DATA_H
