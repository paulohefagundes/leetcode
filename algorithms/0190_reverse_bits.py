class Solution:
    def reverseBits(self, n: int) -> int:
        m = 0
        for _i in range(32):
            m <<= 1
            m |= n & 1
            n >>= 1
        return m
