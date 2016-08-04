/**
 * @author Huahang Liu (huahang@xiaomi.com)
 * @date 2016-08-04
 */

#include "ipp.h"

#include "gtest/gtest.h"

TEST(IppTest, TestGetVersion) {
  const IppLibraryVersion* version = ippvmGetLibVersion();
  EXPECT_TRUE(NULL != version);
}

