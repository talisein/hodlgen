#include "CppUTest/TestHarness.h"
#include "byte_store.h"

TEST_GROUP(byte_store)
{
};

TEST(byte_store, container)
{
    /* Check typedefs */
    using value_type = byte_store::value_type;
    using reference = byte_store::reference;
    using const_reference = byte_store::const_reference;
    using iter = byte_store::iterator;
    using const_iter = byte_store::const_iterator;
    using diff_type = byte_store::difference_type;
    using size_type = byte_store::size_type;

    /* Check methods & operators */
    byte_store key;
    byte_store key2(key);
    key = key2;
    auto i = key.begin();
    auto e = key.end();
    CHECK(i == e);
    const auto ci = key.cbegin();
    const auto ce = key.cend();
    CHECK(ci == ce);

    CHECK(key == key2);
    key.swap(key2);
    std::swap(key2, key);
}
