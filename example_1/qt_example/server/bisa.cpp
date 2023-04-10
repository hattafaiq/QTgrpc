////////
/// protobuf versi 3.21.12
/// grcp versi 1.53.0
///

#include "bisa.h"

bisa::bisa(QObject *parent) : QObject(parent)
{
    using grpc::Server;
    using grpc::ServerBuilder;
    using grpc::ServerContext;
    using grpc::Status;

    using stringreverse::StringReply;
    using stringreverse::StringRequest;
    using stringreverse::StringReverse;

    class ReverseServiceImplementation final : public StringReverse::Service {
      Status sendRequest(ServerContext* context, const StringRequest* request,
                         StringReply* reply) override {
        // Obtains the original string from the request
        std::string a = request->original();

        // String reversal
        int n = a.length();
        for (int i = 0; i < n / 2; i++) std::swap(a[i], a[n - i - 1]);

        reply->set_reversed(a);
        return Status::OK;
      }
    };

      std::string server_address("0.0.0.0:50051");
      ReverseServiceImplementation service;

      ServerBuilder builder;
      // Listen on the given address without any authentication mechanism
      builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
      // Register "service" as the instance through which
      // communication with client takes place
      builder.RegisterService(&service);

      // Assembling the server
      std::unique_ptr<Server> server(builder.BuildAndStart());
      std::cout << "Server listening on port: " << server_address << std::endl;

      server->Wait();

}

bisa::~bisa()
{

}

void bisa::mulai()
{

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
