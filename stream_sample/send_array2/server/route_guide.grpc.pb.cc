// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: route_guide.proto

#include "route_guide.pb.h"
#include "route_guide.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace routeguide {

static const char* RouteGuide_method_names[] = {
  "/routeguide.RouteGuide/RouteChat",
  "/routeguide.RouteGuide/komdat",
  "/routeguide.RouteGuide/baru",
};

std::unique_ptr< RouteGuide::Stub> RouteGuide::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RouteGuide::Stub> stub(new RouteGuide::Stub(channel, options));
  return stub;
}

RouteGuide::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_RouteChat_(RouteGuide_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_komdat_(RouteGuide_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_baru_(RouteGuide_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::routeguide::RouteNote, ::routeguide::RouteNote>* RouteGuide::Stub::RouteChatRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::routeguide::RouteNote, ::routeguide::RouteNote>::Create(channel_.get(), rpcmethod_RouteChat_, context);
}

void RouteGuide::Stub::async::RouteChat(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::routeguide::RouteNote,::routeguide::RouteNote>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::routeguide::RouteNote,::routeguide::RouteNote>::Create(stub_->channel_.get(), stub_->rpcmethod_RouteChat_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::RouteNote, ::routeguide::RouteNote>* RouteGuide::Stub::AsyncRouteChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::RouteNote, ::routeguide::RouteNote>::Create(channel_.get(), cq, rpcmethod_RouteChat_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::RouteNote, ::routeguide::RouteNote>* RouteGuide::Stub::PrepareAsyncRouteChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::RouteNote, ::routeguide::RouteNote>::Create(channel_.get(), cq, rpcmethod_RouteChat_, context, false, nullptr);
}

::grpc::ClientReaderWriter< ::routeguide::Routekomdat, ::routeguide::Routekomdat>* RouteGuide::Stub::komdatRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::routeguide::Routekomdat, ::routeguide::Routekomdat>::Create(channel_.get(), rpcmethod_komdat_, context);
}

void RouteGuide::Stub::async::komdat(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::routeguide::Routekomdat,::routeguide::Routekomdat>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::routeguide::Routekomdat,::routeguide::Routekomdat>::Create(stub_->channel_.get(), stub_->rpcmethod_komdat_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::Routekomdat, ::routeguide::Routekomdat>* RouteGuide::Stub::AsynckomdatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::Routekomdat, ::routeguide::Routekomdat>::Create(channel_.get(), cq, rpcmethod_komdat_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::Routekomdat, ::routeguide::Routekomdat>* RouteGuide::Stub::PrepareAsynckomdatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::Routekomdat, ::routeguide::Routekomdat>::Create(channel_.get(), cq, rpcmethod_komdat_, context, false, nullptr);
}

::grpc::ClientReaderWriter< ::routeguide::Routebaru, ::routeguide::Routebaru>* RouteGuide::Stub::baruRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::routeguide::Routebaru, ::routeguide::Routebaru>::Create(channel_.get(), rpcmethod_baru_, context);
}

void RouteGuide::Stub::async::baru(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::routeguide::Routebaru,::routeguide::Routebaru>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::routeguide::Routebaru,::routeguide::Routebaru>::Create(stub_->channel_.get(), stub_->rpcmethod_baru_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::Routebaru, ::routeguide::Routebaru>* RouteGuide::Stub::AsyncbaruRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::Routebaru, ::routeguide::Routebaru>::Create(channel_.get(), cq, rpcmethod_baru_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::routeguide::Routebaru, ::routeguide::Routebaru>* RouteGuide::Stub::PrepareAsyncbaruRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::routeguide::Routebaru, ::routeguide::Routebaru>::Create(channel_.get(), cq, rpcmethod_baru_, context, false, nullptr);
}

RouteGuide::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RouteGuide_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< RouteGuide::Service, ::routeguide::RouteNote, ::routeguide::RouteNote>(
          [](RouteGuide::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::routeguide::RouteNote,
             ::routeguide::RouteNote>* stream) {
               return service->RouteChat(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RouteGuide_method_names[1],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< RouteGuide::Service, ::routeguide::Routekomdat, ::routeguide::Routekomdat>(
          [](RouteGuide::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::routeguide::Routekomdat,
             ::routeguide::Routekomdat>* stream) {
               return service->komdat(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RouteGuide_method_names[2],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< RouteGuide::Service, ::routeguide::Routebaru, ::routeguide::Routebaru>(
          [](RouteGuide::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::routeguide::Routebaru,
             ::routeguide::Routebaru>* stream) {
               return service->baru(ctx, stream);
             }, this)));
}

RouteGuide::Service::~Service() {
}

::grpc::Status RouteGuide::Service::RouteChat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::routeguide::RouteNote, ::routeguide::RouteNote>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RouteGuide::Service::komdat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::routeguide::Routekomdat, ::routeguide::Routekomdat>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RouteGuide::Service::baru(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::routeguide::Routebaru, ::routeguide::Routebaru>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace routeguide

