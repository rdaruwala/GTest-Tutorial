// tests.cpp
#include "math.cpp"
#include <gtest/gtest.h>
 
TEST(MathTest, PositiveNos) { 
    ASSERT_EQ(16, square(4));
    ASSERT_EQ(6.25, square(2.5));
    ASSERT_EQ(100, square(10));
}
 
TEST(MathTest, NegativeNos) {
    ASSERT_EQ(16, square(-4));
    ASSERT_EQ(0.25, square(-0.5));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
