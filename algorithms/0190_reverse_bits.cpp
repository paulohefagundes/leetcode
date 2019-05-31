#include <cstdint>

/*
 * 190. Reverse Bits
 *
 * Reverse bits of a given 32 bits unsigned integer.
 *
 * Example 1:
 *    Input:  00000010100101000001111010011100
 *    Output: 00111001011110000010100101000000
 * Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596,
 *  so return 964176192 which its binary representation is 00111001011110000010100101000000.
 *
 * Example 2:
 *    Input:  11111111111111111111111111111101
 *    Output: 10111111111111111111111111111111
 * Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293,
 *  so return 3221225471 which its binary representation is 10101111110010110010011101101001.
 */

class Solution
{
  public:
    constexpr uint32_t reverseBits(uint32_t n)
    {
        auto m = n;
        constexpr const int bits = 8 * sizeof(n);
        for (int i = 0; i < bits; i++)
        {
            m <<= 1;
            m |= n & 1;
            n >>= 1;
        }
        return m;
    }
};
