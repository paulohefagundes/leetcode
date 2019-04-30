/*******************************************************************************
 * Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American
 *keyboard like the image below.
 *
 * Example 1:
 * Input: ["Hello", "Alaska", "Dad", "Peace"]
 * Output: ["Alaska", "Dad"]
 * Note:
 * You may use one character in the keyboard more than once.
 * You may assume the input string will only contain letters of alphabet.
 *******************************************************************************/
#include <string>
#include <vector>

class Solution
{
  public:
    std::vector<std::string> findWords(std::vector<std::string>& words)
    {
        std::vector<std::string> result;

        for (auto it = words.begin(); it != words.end(); it++)
        {
            if (isWordInRow(*it))
            {
                result.push_back(*it);
            }
        }
        return result;
    }

  private:
    static const std::string ROW1;
    static const std::string ROW2;
    static const std::string ROW3;

    bool isWordInRow(std::string word)
    {
        bool inRow1 = true;
        bool inRow2 = true;
        bool inRow3 = true;

        // loop over each letter in the word checking if it is in the row
        for (char c : word)
        {
            c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
            if (inRow1 && ROW1.find(c) == std::string::npos)
                inRow1 = false;

            if (inRow2 && ROW2.find(c) == std::string::npos)
                inRow2 = false;

            if (inRow3 && ROW3.find(c) == std::string::npos)
                inRow3 = false;
        }

        return inRow1 || inRow2 || inRow3;
    }
};

const std::string Solution::ROW1 = "qwertyuiop";
const std::string Solution::ROW2 = "asdfghjkl";
const std::string Solution::ROW3 = "zxcvbnm";
