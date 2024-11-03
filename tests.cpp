#include <gtest/gtest.h>

TEST(SampleTest, AssertionTrue) {
    ASSERT_TRUE(true);
}

TEST(MathTest, Addition) {
    EXPECT_EQ(2 + 2, 5);
}
