/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/SinkService.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/SinkService.tcc"

#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> SinkServiceSvIf::getProcessor() {
  return std::make_unique<SinkServiceAsyncProcessor>(this);
}

 SinkServiceSvIf::method() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method");
}

folly::SemiFuture<> SinkServiceSvIf::semifuture_method() {
  return apache::thrift::detail::si::semifuture([&] { return method(); });
}

folly::Future<> SinkServiceSvIf::future_method() {
  return apache::thrift::detail::si::future(semifuture_method(), getThreadManager());
}


void SinkServiceSvIf::async_tm_method(std::unique_ptr<apache::thrift::HandlerCallback<>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method(); });
}

 SinkServiceSvIf::methodAndReponse() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodAndReponse");
}

folly::SemiFuture<> SinkServiceSvIf::semifuture_methodAndReponse() {
  return apache::thrift::detail::si::semifuture([&] { return methodAndReponse(); });
}

folly::Future<> SinkServiceSvIf::future_methodAndReponse() {
  return apache::thrift::detail::si::future(semifuture_methodAndReponse(), getThreadManager());
}


void SinkServiceSvIf::async_tm_methodAndReponse(std::unique_ptr<apache::thrift::HandlerCallback<>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodAndReponse(); });
}

 SinkServiceSvNull::method() {
  return 0;
}

 SinkServiceSvNull::methodAndReponse() {
  return 0;
}

const char* SinkServiceAsyncProcessor::getServiceName() {
  return "SinkService";
}

folly::Optional<std::string> SinkServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void SinkServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool SinkServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::shared_ptr<folly::RequestContext> SinkServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

std::unordered_set<std::string> SinkServiceAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> SinkServiceAsyncProcessor::cacheKeyMap_ {};
const SinkServiceAsyncProcessor::ProcessMap& SinkServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const SinkServiceAsyncProcessor::ProcessMap SinkServiceAsyncProcessor::binaryProcessMap_ {
  {"method", &SinkServiceAsyncProcessor::_processInThread_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodAndReponse", &SinkServiceAsyncProcessor::_processInThread_methodAndReponse<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const SinkServiceAsyncProcessor::ProcessMap& SinkServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const SinkServiceAsyncProcessor::ProcessMap SinkServiceAsyncProcessor::compactProcessMap_ {
  {"method", &SinkServiceAsyncProcessor::_processInThread_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodAndReponse", &SinkServiceAsyncProcessor::_processInThread_methodAndReponse<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift