#include <cstdio>
#include <gtest/gtest.h>
#include <tuple>
#include "func.h"

class SumTest :public ::testing::TestWithParam<std::tuple<int,int> > {};

TEST_P(SumTest, CheckSum){
    int a=std::get<0>(GetParam());
    int b=std::get<1>(GetParam());
    EXPECT_EQ(a+b,sum(a,b));
}

INSTANTIATE_TEST_CASE_P(
    _,
    SumTest,
    ::testing::Values(
        std::make_tuple(3,5),
        std::make_tuple(4,2),
        std::make_tuple(9,3),
        std::make_tuple(1,1),
        std::make_tuple(0,0)
    )
);

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
