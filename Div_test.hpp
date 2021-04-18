#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"
#include "MockTests/NegOpMock.hpp"
#include "MockTests/HundredMock.hpp"
#include "Mult.hpp"
#include "op.hpp"
#include "Div.hpp"
#define M_PI 3.14159265358979323846


TEST(DivTests, Zero){
	Base* left = new Op(0);
	Base* right = new Op(1);
	Div* d = new Div(left,right);
	EXPECT_EQ(d->evaluate(), ZeroOpMock().evaluate());

}

TEST(DivTests, Neg ){
	Base* left = new Op(-100);
	Base* right = new Op(10);
	Div* d = new Div(left,right);
	EXPECT_EQ(d->evaluate(), NegativeOpMock().evaluate());
}

TEST(DivTests, Pos){
	Base* left = new Op(M_PI);
	Base* right = new Op(1);
	Div* d = new Div(left,right);
	EXPECT_EQ(d->evaluate(), PiMock().evaluate());
}

TEST(DivTests, PosString){
	Base* left = new Op(M_PI);
	Base* right = new Op(1);
	Div* d = new Div(left,right);
	EXPECT_EQ(d->stringify(), "(" + PiMock().stringify() + "/1)");
}

TEST(DivTests, Mult){
	Base* left = new Op(10);
	Base* right = new Op(10);
	Mult* test = new Mult(left, right);
	Base* three= new Op(3);
	Div* d = new Div(test, three);
	Op* ans = new Op(double(100)/3);
	EXPECT_EQ(d->evaluate(), ans->evaluate());	

}

TEST(DivTests, MultString){
	Base* left = new Op(10);
        Base* right = new Op(10);
        Mult* test = new Mult(left, right);
        Base* three = new Op(3);
	Div* d = new Div(test, three);
        EXPECT_EQ(d->stringify(), "((" +  left->stringify() + "*" + right->stringify() + ")" + "/3)");
}
