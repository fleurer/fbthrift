/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/EmptyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include <folly/small_vector.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class EmptyServiceSvAsyncIf {
 public:
  virtual ~EmptyServiceSvAsyncIf() {}
};

class EmptyServiceAsyncProcessor;

class EmptyServiceSvIf : public EmptyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef EmptyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
};

class EmptyServiceSvNull : public EmptyServiceSvIf {
 public:
};

class EmptyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  EmptyServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<EmptyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const EmptyServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const EmptyServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const EmptyServiceAsyncProcessor::ProcessMap binaryProcessMap_;
   static const EmptyServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
 public:
  EmptyServiceAsyncProcessor(EmptyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~EmptyServiceAsyncProcessor() {}
};

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
