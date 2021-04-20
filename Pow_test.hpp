
#pragma once

#include "gtest/gtest.h"
#include "MockTests/ZeroOpMock.hpp"
#include "MockTests/HundredMock.hpp"
#include "MockTests/NegOpMock.hpp"
#include "MockTests/Pi_Mock.hpp"
#include "Pow.hpp"
#include "op.hpp"
#include <cmath>

TEST(PowTests, One) {
        Base* x = new Op(0);
        Base* y = new Op(0);
        Pow* a = new Pow(x, y);

        EXPECT_EQ(a->evaluate(), 1);
}

TEST(PowTests, Pos) {
        Base* x = new Op(10);
        Base* y = new Op(2);
        Pow* a = new Pow(x, y);

        EXPECT_EQ(a->evaluate(), HundredMock().evaluate());
}

TEST(PowTests, Neg) {
        Base* x = new Op(-10);
        Base* y = new Op(1);
        Pow* a = new Pow(x, y);

        EXPECT_EQ(a->evaluate(), NegativeOpMock().evaluate());
}

TEST(PowTests, PosString) {
        Base* x = new Op(M_PI);
        Base* y = new Op(0);
        Pow* a = new Pow(x, y);

        EXPECT_EQ(a->stringify(), "(" + PiMock().stringify() + "**0)");
}
