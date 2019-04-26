#include <stack>
#include <string>
#include <unordered_map>

/*******************************************************************************
 * Source: https://leetcode.com/problems/valid-parentheses/
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
 * determine if the input string is valid.
 *
 * An input string is valid if:
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Note that an empty string is also considered valid.
 *******************************************************************************/

class Solution
{
  public:
    // time:  O(n)
    // space: O(n)
    bool isValid(std::string s)
    {
        const std::unordered_map<char, char> map = {{')', '('}, {'}', '{'}, {']', '['}};

        std::stack<char> stack;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                stack.push(c);
            }
            else if (c == ')' || c == '}' || c == ']')
            {
                if (stack.empty() || (stack.top() != map.at(c)))
                {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
