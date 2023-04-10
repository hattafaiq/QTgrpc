// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: keyvaluestore.proto
// Original file comments:
// Copyright 2018 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_keyvaluestore_2eproto__INCLUDED
#define GRPC_keyvaluestore_2eproto__INCLUDED

#include "keyvaluestore.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace keyvaluestore {

// A simple key-value storage service
class KeyValueStore final {
 public:
  static constexpr char const* service_full_name() {
    return "keyvaluestore.KeyValueStore";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Provides a value for each key request
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>> GetValues(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>>(GetValuesRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>> AsyncGetValues(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>>(AsyncGetValuesRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>> PrepareAsyncGetValues(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>>(PrepareAsyncGetValuesRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Provides a value for each key request
      virtual void GetValues(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::keyvaluestore::Request,::keyvaluestore::Response>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>* GetValuesRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>* AsyncGetValuesRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::keyvaluestore::Request, ::keyvaluestore::Response>* PrepareAsyncGetValuesRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>> GetValues(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>>(GetValuesRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>> AsyncGetValues(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>>(AsyncGetValuesRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>> PrepareAsyncGetValues(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>>(PrepareAsyncGetValuesRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetValues(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::keyvaluestore::Request,::keyvaluestore::Response>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>* GetValuesRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>* AsyncGetValuesRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::keyvaluestore::Request, ::keyvaluestore::Response>* PrepareAsyncGetValuesRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetValues_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Provides a value for each key request
    virtual ::grpc::Status GetValues(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetValues : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetValues() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetValues() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetValues(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetValues(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetValues<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetValues : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetValues() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::keyvaluestore::Request, ::keyvaluestore::Response>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->GetValues(context); }));
    }
    ~WithCallbackMethod_GetValues() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetValues(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::keyvaluestore::Request, ::keyvaluestore::Response>* GetValues(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_GetValues<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetValues : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetValues() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetValues() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetValues(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetValues : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetValues() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetValues() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetValues(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetValues(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetValues : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetValues() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->GetValues(context); }));
    }
    ~WithRawCallbackMethod_GetValues() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetValues(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::keyvaluestore::Response, ::keyvaluestore::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* GetValues(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace keyvaluestore


#endif  // GRPC_keyvaluestore_2eproto__INCLUDED
