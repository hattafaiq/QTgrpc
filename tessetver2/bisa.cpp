#include "bisa.h"

bisa::bisa(QObject *parent) : QObject(parent)
{

}

bisa::~bisa()
{

}



void bisa::mulai()
{

   // return;
}


//bikin protobuf jadi duapesan
//// Create a message and fill it with data
//MyMessage message;
//message.set_id(123);
//message.set_name("John");

//// Serialize the message to a byte array
//uint8_t buffer[1024];
//int size = message.SerializeToArray(buffer, sizeof(buffer));

//// Deserialize the message from the byte array
//MyMessage deserialized_message;
//deserialized_message.ParseFromArray(buffer, size);

//// Access the deserialized message's data
//std::cout << deserialized_message.id() << std::endl;   // prints "123"
//std::cout << deserialized_message.name() << std::endl; // prints "John"

//std::string myStdString = "Hello, world!";
//QString myQString = QString::fromStdString(myStdString);

//char myChar = 'A';

//// Create a temporary char array and fill it with data
//char tempCharArr[sizeof(MyStruct)];
//memset(tempCharArr, 0, sizeof(MyStruct));
//tempCharArr[0] = myChar;

//// Use a pointer to initialize the struct
//MyStruct myStruct = *reinterpret_cast<MyStruct*>(tempCharArr);

//QString qtString = QString::fromUtf8(message.my_string_field().c_str());
