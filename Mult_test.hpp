#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"
#include "MockTests/NegOpMock.hpp"
#include "Mult.hpp"
#include "op.hpp"
#include "Div.hpp"
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
        PiMock pi; //using Mock Tests
        Mult* test = new Mult(left,right);
        EXPECT_EQ(test->evaluate(), pi.evaluate());

}
TEST(MultTests, MultPiString){
	Base* left = new Op(M_PI);
        Base* right = new Op(1);
	PiMock pi; //using Mock Test
        Mult* test = new Mult(left,right);
        EXPECT_EQ(test->stringify(), "("+pi.stringify()+"*"+right->stringify()+")" );
	//delete pi;
 
}

TEST(MultTests, MultNeg){
	Base* left = new Op(-5);
	Base* right = new Op(2);
	NegativeOpMock neg;
	Mult* test = new Mult(left, right);
	EXPECT_EQ(test->evaluate(),neg.evaluate());
}

TEST(MultTests,MultNegString){
	Base* left = new Op(-5);
        Base* right = new Op(2);
        Mult* test = new Mult(left, right);
        EXPECT_EQ(test->stringify(),"("+left->stringify()+"*"+right->stringify()+")");
	
}

TEST(MultTests,MultDiv){
        Base* left = new Op(-5);
        Base* right = new Op(2);
        Div* test = new Div(left, right);
        EXPECT_EQ(test->evaluate(), double(-5)/2);

}

