#include "0500_keyboardRow.hpp"
#include <catch2/catch.hpp>
#include <string>

TEST_CASE("keyboardRow1")
{
    Solution solution = Solution();
    std::vector<std::string> words{"Hello", "Alaska", "Dad", "Peace"};
    std::vector<std::string> answer = solution.findWords(words);
    REQUIRE(answer.size() == 2);
}

TEST_CASE("keyboardRow2")
{
    Solution solution = Solution();
    std::vector<std::string> words{"a", "b"};
    std::vector<std::string> answer = solution.findWords(words);
    REQUIRE(answer.size() == 2);
}
