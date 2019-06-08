/*
  371. Sum of Two Integers

  Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

  Example 1:
    Input: a = 1, b = 2
    Output: 3

  Example 2:
    Input: a = -2, b = 3
    Output: 1
 */

class Solution
{
  public:
    // time:  O(n)
    // space: O(1)
    int getSum(int a, int b)
    {
        int sum = a;
        while (b != 0)
        {
            sum = a ^ b;
            b = static_cast<unsigned int>(a & b) << 1; // a & b = carry
            a = sum;
        }
        return sum;
    }

    // time:  O(n)
    // space: O(1)
    int getSum2(int a, int b)
    {
        int c;
        while (b != 0)
        {
            c = (a & b); // calculate the carry
            a = a ^ b;   // sum of a and b
            b = static_cast<unsigned int>(c) << 1;
        }
        return a;
    }
};
