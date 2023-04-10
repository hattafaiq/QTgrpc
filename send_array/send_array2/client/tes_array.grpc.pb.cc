// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tes_array.proto

#include "tes_array.pb.h"
#include "tes_array.grpc.pb.h"

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
namespace mathtest {

static const char* MathTest_method_names[] = {
  "/mathtest.MathTest/sendRequest",
  "/mathtest.MathTest/sendarray",
};

std::unique_ptr< MathTest::Stub> MathTest::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MathTest::Stub> stub(new MathTest::Stub(channel, options));
  return stub;
}

MathTest::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_sendRequest_(MathTest_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_sendarray_(MathTest_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MathTest::Stub::sendRequest(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::mathtest::MathReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mathtest::MathRequest, ::mathtest::MathReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_sendRequest_, context, request, response);
}

void MathTest::Stub::async::sendRequest(::grpc::ClientContext* context, const ::mathtest::MathRequest* request, ::mathtest::MathReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mathtest::MathRequest, ::mathtest::MathReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendRequest_, context, request, response, std::move(f));
}

void MathTest::Stub::async::sendRequest(::grpc::ClientContext* context, const ::mathtest::MathRequest* request, ::mathtest::MathReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mathtest::MathReply>* MathTest::Stub::PrepareAsyncsendRequestRaw(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mathtest::MathReply, ::mathtest::MathRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_sendRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mathtest::MathReply>* MathTest::Stub::AsyncsendRequestRaw(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsendRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MathTest::Stub::sendarray(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::mathtest::Mathhasil* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mathtest::MathRequest, ::mathtest::Mathhasil, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_sendarray_, context, request, response);
}

void MathTest::Stub::async::sendarray(::grpc::ClientContext* context, const ::mathtest::MathRequest* request, ::mathtest::Mathhasil* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mathtest::MathRequest, ::mathtest::Mathhasil, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendarray_, context, request, response, std::move(f));
}

void MathTest::Stub::async::sendarray(::grpc::ClientContext* context, const ::mathtest::MathRequest* request, ::mathtest::Mathhasil* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_sendarray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mathtest::Mathhasil>* MathTest::Stub::PrepareAsyncsendarrayRaw(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mathtest::Mathhasil, ::mathtest::MathRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_sendarray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mathtest::Mathhasil>* MathTest::Stub::AsyncsendarrayRaw(::grpc::ClientContext* context, const ::mathtest::MathRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncsendarrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

MathTest::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MathTest_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MathTest::Service, ::mathtest::MathRequest, ::mathtest::MathReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MathTest::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mathtest::MathRequest* req,
             ::mathtest::MathReply* resp) {
               return service->sendRequest(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MathTest_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MathTest::Service, ::mathtest::MathRequest, ::mathtest::Mathhasil, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MathTest::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mathtest::MathRequest* req,
             ::mathtest::Mathhasil* resp) {
               return service->sendarray(ctx, req, resp);
             }, this)));
}

MathTest::Service::~Service() {
}

::grpc::Status MathTest::Service::sendRequest(::grpc::ServerContext* context, const ::mathtest::MathRequest* request, ::mathtest::MathReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MathTest::Service::sendarray(::grpc::ServerContext* context, const ::mathtest::MathRequest* request, ::mathtest::Mathhasil* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mathtest

