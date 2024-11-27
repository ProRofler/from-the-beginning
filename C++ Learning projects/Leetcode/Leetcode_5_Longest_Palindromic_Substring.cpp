#include <iostream>

using namespace std;

string longestPalindrome(string s) {
  string longest_palindrome;
  string temp;

  auto start = 1ull;
  auto end = 2ull;

  for (; start < s.size() - 1ull; end++) {
    if (s.at(start-1ull) != s.at(end)) {
      break;
    }
  }

  return longest_palindrome;
}

int main() {
  cout << longestPalindrome("kekkarior") << endl;

  return 0;
}