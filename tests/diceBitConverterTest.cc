#include "CppUTest/TestHarness.h"
#include "diceBitConverter.h"

TEST_GROUP(diceBitConverter)
{
};

TEST(diceBitConverter, FirstTest)
{
    diceBitConverter conv;

    CHECK_EQUAL(0, conv.append(1));
    CHECK_EQUAL(-1, conv.append(0));
    CHECK_EQUAL(-1, conv.append(7));
}
