#include "buildings.cpp"
#include <gtest/gtest.h>
TEST(F,A)
{
    std::vector <int> vec = {4,3,2,1};
    std::deque <int> deq = {0,1,2,3};
    std::vector <int> vec1 = {1,3,2,4};
    std::deque <int> deq1 = {3};
    std::vector <int> vec2 = {5,6,3,8,1};
    std::deque <int> deq2 = {3,4};

    ASSERT_EQ(deq,result(vec));
    ASSERT_EQ(deq1,result(vec1));
    ASSERT_EQ(deq2,result(vec2));
}

int main(int argc,char* argv[])
{
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}
