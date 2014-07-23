// Copyright 2014 Google Inc. All rights reserved.
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

#include "sleep.h"

#include <chrono>
#include <thread>

namespace benchmark {

void SleepForMicroseconds(int64_t microseconds) {
  typedef std::chrono::microseconds unit;
  unit dura(static_cast<unit::rep>(microseconds));
  std::this_thread::sleep_for(dura);
}

void SleepForMilliseconds(int milliseconds) {
  typedef std::chrono::milliseconds unit;
  unit dura(static_cast<unit::rep>(milliseconds));
  std::this_thread::sleep_for(dura);
}

void SleepForSeconds(double seconds) {
  typedef std::chrono::seconds unit;
  unit dura(static_cast<unit::rep>(seconds));
  std::this_thread::sleep_for(dura);
}

}  // end namespace benchmark
