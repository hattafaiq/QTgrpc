#ifndef INPUT_DATA_H
#define INPUT_DATA_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include <QFile>

class input_data
{
public:
    input_data();
    virtual ~input_data();
    void check_db_exist(QString filename, int count_db);
    void load_database(QString filename, int count_db);
    void create_database(QString filename, int count_db);
    void create_table_baru(QSqlQuery *q, int driver);
    //float data_get[10][1000];
    float data_get[1000];
    float data_array[1000];
    void masuk();
    QSqlDatabase db_glob;
    QByteArray array0;
    char *a;
};

#endif // INPUT_DATA_H
