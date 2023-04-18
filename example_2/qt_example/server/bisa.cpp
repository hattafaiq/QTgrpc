////////
/// protobuf versi 3.21.12
/// grcp versi 1.53.0
///
#include "bisa.h"
#include <QDebug>
bisa::bisa(QObject *parent) : QObject(parent)
{

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

//    QSqlQuery c_data(db);
//  //  proses_q(&c_data, "select id_kind from aset where id = %d", 2);


}

//float a;
//char buffer[sizeof(float)];
//memcpy(buffer,&a,sizeof(float));

//const char* ch = "Welcome to GeeksForGeeks";
//    string s(ch);
//    cout << s;
//    return 0;
