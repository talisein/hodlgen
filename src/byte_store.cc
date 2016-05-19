#include "byte_store.h"

byte_store::byte_store()
{
}

byte_store::~byte_store()
{
}

byte_store::byte_store(const byte_store& key) :
m_bitarray(key.m_bitarray)
{
}

byte_store::iterator byte_store::begin() noexcept
{
    return m_bitarray.begin();
}

byte_store::const_iterator byte_store::begin() const noexcept
{
    return m_bitarray.begin();
}

byte_store::const_iterator byte_store::cbegin() const noexcept
{
    return m_bitarray.cbegin();
}

byte_store::iterator byte_store::end() noexcept
{
    return m_bitarray.end();
}

byte_store::const_iterator byte_store::end() const noexcept
{
    return m_bitarray.end();
}

byte_store::const_iterator byte_store::cend() const noexcept
{
    return m_bitarray.cend();
}

bool operator==(const byte_store& lhs, const byte_store& rhs)
{
    return std::equal(lhs.cbegin(), lhs.cend(), rhs.cbegin(), rhs.cend());
}

bool operator!=(const byte_store& lhs, const byte_store& rhs)
{
    return !std::equal(lhs.cbegin(), lhs.cend(), rhs.cbegin(), rhs.cend());
}

void byte_store::swap(byte_store& other)
{
    m_bitarray.swap(other.m_bitarray);
    std::swap(m_curbits, other.m_curbits);
}

byte_store::size_type byte_store::size() const noexcept
{
    return m_bitarray.size();
}
