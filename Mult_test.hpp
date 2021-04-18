#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"
#include "Mult.hpp"
#include "op.hpp"
#define M_PI 3.14159265358979323846


TEST(MultTests, MultZero){
	Base* left = new Op(8);
	Base* right = new Op(0); 
	ZeroOpMock zero;
	Mult* test = new Mult(left,right);
	EXPECT_EQ(test->evaluate(), zero.evaluate()); 
}

TEST(MultTests, MultPi){
	Base* left = new Op(M_PI);
        Base* right = new Op(1);
        PiMock pi;
        Mult* test = new Mult(left,right);
        EXPECT_EQ(test->evaluate(), pi.evaluate());

}

//TEST(OpTest, OpStringify){
////	Op* test = new Op(9);
////	EXPECT_EQ(test->stringify(), "9");
////}
//#endif //__OP_TEST_HPP__
