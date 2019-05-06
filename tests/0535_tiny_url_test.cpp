#include "0535_tiny_url.cpp"
#include <doctest.h>

TEST_CASE("encode and decode")
{
    std::string plain{"hello world"};
    Solution s = Solution();
    auto encoded = s.encode(plain);
    CHECK_FALSE(encoded.empty());
    CHECK(encoded != plain);
    CHECK(s.decode(encoded) == plain);
}
