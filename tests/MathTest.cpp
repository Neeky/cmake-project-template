#include <gtest/gtest.h>
#include "../src/tools/math.h"

/**
 * 增加对 add 函数的测试
 */
TEST(MathTest, BasicAssertions)
{
    EXPECT_EQ(200, add(100, 100));
}