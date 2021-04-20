#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/HundredMock.hpp"
#include "MockTests/NegOpMock.hpp"
#include "MockTests/SevenOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "op.hpp"
#include <cmath>

TEST(AddTests, Zero) {
        Base* x = new Op(0);
        Base* y = new Op(0);
        Add* a = new Add(x, y);

        EXPECT_EQ(a->evaluate(), ZeroOpMock().evaluate());
}

TEST(AddTests, Pos) {
        Base* x = new Op(2.5);
        Base* y = new Op(5);
        Add* a = new Add(x, y);

        EXPECT_EQ(a->evaluate(), SevenOpMock().evaluate());
}

TEST(AddTests, Neg) {
        Base* x = new Op(-10);
        Base* y = new Op(0);
        Add* a = new Add(x, y);

        EXPECT_EQ(a->evaluate(), NegativeOpMock().evaluate());
}

TEST(AddTests, NegString) {
        Base* x = new Op(-10);
        Base* y = new Op(0);
        Add* a = new Add(x, y);

        EXPECT_EQ(a->stringify(), "(" + NegativeOpMock().stringify() + "+0)");
}


TEST(AddTests, PosString) {
        Base* x = new Op(M_PI);
        Base* y = new Op(0);
        Add* a = new Add(x, y);

        EXPECT_EQ(a->stringify(), "(" + PiMock().stringify() + "+0)");
}

TEST(AddTests, Sub) {
       Base* x = new Op(100);
       Base* y = new Op(10);
       Add* a = new Add(x, y);

       Base* ten = new Op(10);
       Sub* s = new Sub(a, ten);

       EXPECT_EQ(s->evaluate(), HundredMock().evaluate());
}

