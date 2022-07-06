/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#ifndef TIME_TRACE_H
#define TIME_TRACE_H

#include <string>

namespace OHOS {
namespace MiscServices {
void InitHiTrace();
void ValueTrace(const std::string &name, int64_t count);
class TimeTrace {
public:
    explicit TimeTrace(const std::string &value);
    virtual ~TimeTrace();
};
} // namespace MiscServices
} // namespace OHOS
#endif // TIME_TRACE_H