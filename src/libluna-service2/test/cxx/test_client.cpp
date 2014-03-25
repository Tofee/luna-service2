// @@@LICENSE
//
//      Copyright (c) 2014 LG Electronics, Inc.
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
//
// LICENSE@@@

#include <gtest/gtest.h>
#include <luna-service2/lunaservice.hpp>

using namespace std;

TEST(TestClient, Register)
{
    LS::Error e;
    LSHandle *sh;
    ASSERT_TRUE(LSRegister("com.palm.test_client", &sh, e.get()));
    EXPECT_FALSE(e.isSet());

    ASSERT_TRUE(LSUnregister(sh, e.get()));
    EXPECT_FALSE(e.isSet());
}