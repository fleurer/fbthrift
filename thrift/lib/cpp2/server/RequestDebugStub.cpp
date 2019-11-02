/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/server/RequestDebugStub.h>
#include <thrift/lib/cpp2/server/ActiveRequestsRegistry.h>

namespace apache {
namespace thrift {

RequestDebugStub::RequestDebugStub(
    ActiveRequestsRegistry& reqRegistry,
    const ResponseChannelRequest& req,
    const Cpp2RequestContext& reqContext)
    : req_(&req),
      reqContext_(&reqContext),
      timestamp_(std::chrono::steady_clock::now()) {
  reqRegistry.addRequestDebugStub(*this);
}

} // namespace thrift
} // namespace apache