#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {

  string m_substr;
  string t_substr;

  for (auto c : s) {
    auto p = t_substr.find(c);
    if (p == t_substr.npos) {  // IF NOT FOUND
      t_substr.push_back(c);
      if (t_substr.size() > m_substr.size()) {
        m_substr = t_substr;
      }
    } else {  // IF FOUND
      t_substr.erase(0, p+1);
      t_substr.push_back(c);
    }
    cout << t_substr << '\n';
  }
  return m_substr.size();
}

int main() {
  cout << lengthOfLongestSubstring("aa") << " : result\n";

  return 0;
}