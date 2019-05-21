// Source : https://leetcode.com/problems/hamming-distance/
// Author : Paulo Fagundes
// Date   : Aug 2nd, 2017

/*******************************************************************************
 * The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
 *
 * Given two integers x and y, calculate the Hamming distance.
 *
 * Note:
 * 0 ≤ x, y < 231.
 *
 * see problem 191 (hamming weight)
 *******************************************************************************/

class Solution
{
  public:
    // time:  O(1)
    // space: O(1)
    unsigned hammingDistance(int x, int y) { return hammingWeight(x ^ y); }

  private:
    // thx to http://www.geeksforgeeks.org/count-set-bits-in-an-integer/
    // Brian Kernighan’s Algorithm
    /* Function to get no of set bits in binary
     representation of passed binary no. */
    unsigned hammingWeight(int n)
    {
        unsigned count = 0;
        while (n)
        {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
