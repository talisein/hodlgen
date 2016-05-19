#include <bitset>
#include "CppUTest/TestHarness.h"

TEST_GROUP(cppAssumptions)
{
};

TEST(cppAssumptions, bitvectbytes)
{
    std::bitset<8> bs;

    bs.set(0, true);
    CHECK_EQUAL(1, bs.to_ulong());
}
