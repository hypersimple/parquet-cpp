// Copyright 2012 Cloudera Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef IMPALA_COMMON_LOGGING_H
#define IMPALA_COMMON_LOGGING_H

#include <iostream>

#define DCHECK(condition) while(false) std::cout
#define DCHECK_EQ(a, b) while(false) std::cout
#define DCHECK_NE(a, b) while(false) std::cout
#define DCHECK_GT(a, b) while(false) std::cout
#define DCHECK_LT(a, b) while(false) std::cout
#define DCHECK_GE(a, b) while(false) std::cout
#define DCHECK_LE(a, b) while(false) std::cout
// Similar to how glog defines DCHECK for release.
#define LOG(level) while(false) std::cout

#endif
