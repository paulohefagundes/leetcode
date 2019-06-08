class Solution:
    def getSum(self, a: int, b: int) -> int:
        mask = 0xFFFFFFFF
        sum = a
        while b != 0:
            sum = (a ^ b) & mask
            b = ((a & b) << 1) & mask
            a = sum
        if (sum >> 31) & 1:
            return ~(sum ^ mask)
        return sum
