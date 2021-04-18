#include "gtest/gtest.h"
#include "Mult_test.hpp"
#include "op_test.hpp"
#include "Rand_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
