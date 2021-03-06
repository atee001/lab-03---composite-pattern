#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/HundredMock.hpp"
#include "MockTests/NegOpMock.hpp"
#include "MockTests/SevenOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"

#include "Sub.hpp"
#include "op.hpp"
#include <cmath>

TEST(SubTests, Zero) {
        Base* x = new Op(0);
        Base* y = new Op(0);
        Sub* a = new Sub(x, y);

        EXPECT_EQ(a->evaluate(), ZeroOpMock().evaluate());
}

TEST(SubTests, Pos) {
        Base* x = new Op(8.5);
        Base* y = new Op(1);
        Sub* a = new Sub(x, y);

        EXPECT_EQ(a->evaluate(), SevenOpMock().evaluate());
}

TEST(SubTests, Neg) {
        Base* x = new Op(-10);
        Base* y = new Op(0);
        Sub* a = new Sub(x, y);

        EXPECT_EQ(a->evaluate(), NegativeOpMock().evaluate());
}

TEST(SubTests, NegString) {
        Base* x = new Op(-10);
        Base* y = new Op(0);
        Sub* a = new Sub(x, y);

        EXPECT_EQ(a->stringify(), "(" + NegativeOpMock().stringify() + "-0)");
}

TEST(SubTests, PosString) {
        Base* x = new Op(M_PI);
        Base* y = new Op(0);
        Sub* a = new Sub(x, y);

        EXPECT_EQ(a->stringify(), "(" + PiMock().stringify() + "-0)");
}

TEST(SubTests, Add) {
       Base* x = new Op(100);
       Base* y = new Op(10);
       Sub* a = new Sub(x, y);

       Base* ten = new Op(10);
       Add* s = new Add(a, ten);

       EXPECT_EQ(s->evaluate(), HundredMock().evaluate());
}






