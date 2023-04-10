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

    using mathtest::MathTest;
    using mathtest::MathRequest;
    using mathtest::MathReply;
    using mathtest::Mathhasil;

    class MathServiceImplementation final : public MathTest::Service {
//    Status sendRequest(
//        ServerContext* context,
//        const MathRequest* request,
//        MathReply* reply
//    ) override {
//        int a = request->a();
//        int b = request->b();

//        reply->set_result(a * b);

//        return Status::OK;
//    }

    Status sendarray(
        ServerContext* context,
        const MathRequest* request,
        //MathReply* reply
        Mathhasil* hasil
    ) override {
        int a = request->a();
        int b = request->b();

        std::vector<int32_t> my_data = {1, 2, 3, 4};
            for (const auto& val : my_data) {
                hasil->add_result(val);
        }
        //reply->set_result(a * b);
        //hasil->set_result(2,2);

        return Status::OK;
    }

    };

    std::string address("0.0.0.0:5000");
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
