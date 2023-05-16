#include "input_data.h"

input_data::input_data()
{
    float data[100] = {
        10.11,
        11.11,
        12.11,
        13.11,
        14.11,
        15.11,
        16.11,
        17.11,
        18.11,
        19.11,
        20.11,
        21.11,
        22.11,
        23.11,
        24.11,
        25.11,
        26.11,
        27.11,
        28.11,
        29.11,
        30.11,
        31.11,
        32.11,
        33.11,
        34.11,
        35.11,
        36.11,
        37.11,
        38.11,
        39.11,
        40.11,
        41.11,
        42.11,
        43.11,
        44.11,
        45.11,
        46.11,
        47.11,
        48.11,
        49.11,
        50.11,
        51.11,
        52.11,
        53.11,
        54.11,
        55.11,
        56.11,
        57.11,
        58.11,
        59.11,
        60.11,
        61.11,
        62.11,
        63.11,
        64.11,
        65.11,
        66.11,
        67.11,
        68.11,
        69.11,
        70.11,
        71.11,
        72.11,
        73.11,
        74.11,
        75.11,
        76.11,
        77.11,
        78.11,
        79.11,
        80.11,
        81.11,
        82.11,
        83.11,
        84.11,
        85.11,
        86.11,
        87.11,
        88.11,
        89.11,
        90.11,
        91.11,
        92.11,
        93.11,
        94.11,
        95.11,
        96.11,
        97.11,
        98.11,
        99.11,
        100.11,
        101.11,
        102.11,
        103.11,
        104.11,
        105.11,
        106.11,
        107.11,
        108.11,
        109.11 ,
    };
//    int counter=0;
//    for(int i=0; i<1000; i++){

//    }
//    for(int i=0; i<10; i++){
//     memcpy(&data_get[i][0], &data_array[0], 1000 * (sizeof(float)));
//    }
    qDebug()<<"memcpy sukses?";
    masuk();

}

input_data::~input_data()
{
    free(a);
}

void input_data::check_db_exist(QString filename, int count_db)
{
    QFile file(filename + ".ovm");

    if(file.exists()== true)
    {
        //QFileInfo finfo(file.fileName());
        load_database(filename+".ovm",count_db++);
    }
    else
    {
        create_database(filename + ".ovm",count_db);
        return;
    }
}

void input_data::create_database(QString filename, int count_db)
{
    QString con_name;
    con_name.sprintf("LOC_DB%d",count_db++);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE",con_name);
    db.setDatabaseName(filename);

    if(!db.open())
    {
        qDebug() << "db gak kebuka";
        return;
    }
    else
    {
        QSqlQuery query(db);
        create_table_baru(&query, 1);
        query.finish();
        db_glob = db;
    }
}

void input_data::create_table_baru(QSqlQuery *q, int driver)
{
    QString query;
     if (driver==1)
     {
         //    query.sprintf("select count(name) from sqlite_master where name = 'data_waveform_%s'",hrini.toUtf8().data());
             query = QString("select count(name) from sqlite_master where name = 'hallo'");
             int jml=0;
             qDebug("q = %s",query.toUtf8().data());
             q->prepare(query);
             if(!q->exec())
             {
                 qDebug("errorrr");
             }
             else {
                 qDebug("lanjutttt");
                 q->first();
                 jml = q->value(0).toInt();
                 qDebug() << "jumlahnya =  "<< q->value(0).toInt();

             }
             q->clear();
             if (jml < 1){
                 QString aa = QString("create table hallo (id integer PRIMARY KEY AUTOINCREMENT, \
                                      ch INTEGER, data BLOB, numsample integer, size_data integer)");
                  q->prepare(aa);
                  q->exec();
             }

    }
}

void input_data::load_database(QString filename, int count_db)
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
        int sample = 10000;
        int total_sample = sample * 10;
        a = (char *)malloc(1000*sizeof (float));
        QByteArray array0((char *) &data_get[0], 1000 * sizeof(float));
        //(reinterpret_cast<const char*>(&data_get[0]), 10000*sizeof(float));
        //array0.resize();
        array0.resize(3000000);
        qDebug()<<"size:"<<array0.size();
       // memcpy(&a,&data_get,1000*sizeof(float));
        int size_data =array0.size();

        QString con_name;
        con_name = QString("LOC_DB%1").arg(1);
        QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
        db.setDatabaseName(filename);
         QSqlQuery q(db);
        if(!db.open())
        {
            qDebug()<<"db gak kebukak";
            return;
        }
        q.prepare(QString("insert into hallo (ch,data,numsample,size_data) values (:ch, :data, :numsample, :size_data)"));
       // q.prepare(QString("insert into hallo (ch, size_data) values (:ch, :size_data)"));
        q.bindValue(":ch",1);
        q.bindValue(":data",array0);
        q.bindValue(":numsample",total_sample);
        q.bindValue(":size_data",size_data);
        q.exec();
        array0.clear();

    }
   // free(a);
}

void input_data::masuk()
{
    int sample = 10000;
    int total_sample = sample * 10;
    QString filename = "dataku.ovm";
    //check_db_exist(filename,0);
    int count_db=0;
    load_database(filename,count_db);
    QByteArray array0;//((char *) &data_get[10][0], 10000 * sizeof(float));
    int size_data = array0.size();
//    QString con_name;
//    con_name = QString("LOC_DB%1").arg(1);
//    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE",con_name);
//    db.setDatabaseName(filename);
//     QSqlQuery q(db);
//    if(!db.open())
//    {
//        qDebug()<<"db gak kebukak";
//        return;
//    }
//    q.prepare(QString("insert into hallo (ch,data,sample,size_data) values (:ch, :data, :sample, :size_data)"));
//    q.bindValue(":ch",1);
////    q.bindValue(":data",array0);
////   // q.bindValue(":data",balist.at(idx_list_data));
////   // idx_list_data++;
////    q.bindValue(":sample",total_sample);
//    q.bindValue(":size_data",size_data);
//    q.exec();
    //return;
}

