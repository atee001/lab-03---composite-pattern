#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringify){
    Op* test = new Op(10.32848874746);
    EXPECT_EQ(test->stringify(),"10.328489"); 

}
#endif //__OP_TEST_HPP__
