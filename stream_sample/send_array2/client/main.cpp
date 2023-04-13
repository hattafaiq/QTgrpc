#include <QCoreApplication>
#include "coba_lagi.h"
#include <chrono>
#include <iostream>
#include <memory>
#include <random>
#include <string>
#include <thread>

//#include "helper.h"

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;
using grpc::Status;
//using routeguide::Feature;
using routeguide::Point;
using routeguide::RouteGuide;
using routeguide::RouteNote;

using routeguide::Routekomdat;
using routeguide::Routebaru;

//Point MakePoint(long latitude, long longitude) {
//  Point p;
//  p.set_latitude(latitude);
//  p.set_longitude(longitude);
//  return p;
//}

//RouteNote MakeRouteNote(const std::string& message, long latitude,
//                        long longitude) {
//  RouteNote n;
//  n.set_message(message);
//  n.mutable_location()->CopyFrom(MakePoint(latitude, longitude));
//  return n;
//}

Routekomdat MakeRoutekomdat( const std::string message, int32_t data){
    Routekomdat k;
    k.set_header(message);
    k.set_data(data);
    return k;
}


class RouteGuideClient {
 public:
  RouteGuideClient(std::shared_ptr<Channel> channel, const std::string& db):stub_(RouteGuide::NewStub(channel)) {
 //   routeguide::ParseDb(db, &feature_list_);
  }

//void RouteChat() {
//ClientContext context;
//std::shared_ptr<ClientReaderWriter<RouteNote, RouteNote> > stream(stub_->RouteChat(&context));
//std::thread writer([stream]() {
//  std::vector<RouteNote> notes{MakeRouteNote("First message", 0, 0),
//                               MakeRouteNote("Second message", 0, 1),
//                               MakeRouteNote("Third message", 1, 0),
//                               MakeRouteNote("Fourth message", 0, 0)};
//  for (const RouteNote& note : notes) {
//    std::cout << "Sending message " << note.message() << " at "
//              << note.location().latitude() << ", "
//              << note.location().longitude() << std::endl;
//    stream->Write(note);
//  }
//  stream->WritesDone();
//});

//RouteNote server_note;
//while (stream->Read(&server_note)) {
//  std::cout << "Got message " << server_note.message() << " at "
//            << server_note.location().latitude() << ", "
//            << server_note.location().longitude() << std::endl;
//}
//writer.join();
//Status status = stream->Finish();
//if (!status.ok()) {
//  std::cout << "RouteChat rpc failed." << std::endl;
//}
//}

void komdat() {
ClientContext context;
std::shared_ptr<ClientReaderWriter<Routekomdat, Routekomdat> > stream(stub_->komdat(&context));
std::thread writer([stream]() {
  std::vector<Routekomdat> notes{MakeRoutekomdat("First message", 0),
                               MakeRoutekomdat("Second message", 0),
                               MakeRoutekomdat("Third message", 1),
                               MakeRoutekomdat("Fourth message", 0),
                                MakeRoutekomdat("Five message", 0),
                                MakeRoutekomdat("Six message", 1)};
  for (const Routekomdat& note : notes) {
    std::cout << "Sending message " << note.header() << " at " << note.data() << std::endl;
    stream->Write(note);
  }
  stream->WritesDone();
});

Routekomdat server_komdat;
while (stream->Read(&server_komdat)) {
  std::cout << "Got message " << server_komdat.header() << " at "<< server_komdat.data() << " \n";
}
writer.join();
Status status = stream->Finish();
if (!status.ok()) {
  std::cout << "Routekomdat rpc failed." << std::endl;
}

}

 private:
  const float kCoordFactor_ = 10000000.0;
  std::unique_ptr<RouteGuide::Stub> stub_;
//  std::vector<Feature> feature_list_;
};



int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    std::string db = "home/fh/grpc/proto_1/qt_example/stream_sample/send_array2/server/";
    RouteGuideClient guide(grpc::CreateChannel("0.0.0.0:50051",grpc::InsecureChannelCredentials()),db);
    std::cout << "-------------- RouteChat --------------" << std::endl;
    //guide.RouteChat();
    guide.komdat();
    return 0;
   // return a.exec();
}
