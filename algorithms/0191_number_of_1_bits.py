class Solution(object):
    def hammingWeight2(self, n: int) -> int:
        return bin(n).count("1")

    def hammingWeight(self, n: int) -> int:
        c = 0
        while n:
            n &= n - 1
            c += 1
        return c
