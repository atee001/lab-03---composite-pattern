#pragma once

#include "gtest/gtest.h"
#include "Rand.hpp"



TEST(RandTests, Evaluate){
	Base* r = new Rand();
	EXPECT_EQ(r->evaluate(),r->evaluate());	
}

TEST(RandTests, Stringify){
	Base* s = new Rand();
	EXPECT_EQ(s->stringify(),s->stringify());
}



