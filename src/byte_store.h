#include <limits>
#include <vector>
#include <cstdint>

class byte_store
{
public:
    byte_store();
    ~byte_store();

    byte_store(const byte_store& key);
    
    using bitarray_t             = std::vector<unsigned char>;
    using value_type             = bitarray_t::value_type;
    using size_type              = bitarray_t::size_type;
    using difference_type        = bitarray_t::difference_type;
    using reference              = bitarray_t::reference;
    using const_reference        = bitarray_t::const_reference;
    using pointer                = bitarray_t::pointer;
    using const_pointer          = bitarray_t::const_pointer;
    using iterator               = bitarray_t::iterator;
    using const_iterator         = bitarray_t::const_iterator;
    using reverse_iterator       = bitarray_t::reverse_iterator;
    using const_reverse_iterator = bitarray_t::const_reverse_iterator;

    iterator begin() noexcept;
    const_iterator begin() const noexcept;
    const_iterator cbegin() const noexcept;
    iterator end() noexcept;
    const_iterator end() const noexcept;
    const_iterator cend() const noexcept;

    void swap(byte_store& other);
    size_type size() const noexcept;

private:
    bitarray_t m_bitarray;
    std::uint8_t m_curbits; /* Bits set in the end()-1th byte */
};

bool operator==(const byte_store& lhs, const byte_store& rhs);
bool operator!=(const byte_store& lhs, const byte_store& rhs);
