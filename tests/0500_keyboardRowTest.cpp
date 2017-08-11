#include "catch.hpp"
#include "0500_keyboardRow.cpp"

TEST_CASE("keyboardRow1") {
  Solution solution = Solution();
  std::vector<string> words { "Hello","Alaska","Dad","Peace" };
  std::vector<string> answer = solution.findWords(words);
  REQUIRE(answer.size() == 2);

}

TEST_CASE("keyboardRow2") {
  Solution solution = Solution();
  std::vector<string> words { "a", "b" };
  std::vector<string> answer = solution.findWords(words);
  REQUIRE(answer.size() == 2);
}
