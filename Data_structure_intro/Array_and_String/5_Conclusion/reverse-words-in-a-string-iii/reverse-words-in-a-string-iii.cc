class Solution {
public:
    string reverseWords(string s) {
      auto beg = s.begin();
      auto left = beg;
      while (beg != s.end()) {
        if (*beg != ' ') {
          ++beg;
        } else {
          string::difference_type n = beg - left;
          for (auto i = 0; i < n/2; ++i) {
            swap(*(left + i), *(beg - i - 1));
          }
          ++beg;
          left = beg;
        }
      }
      string::difference_type n = beg - left;
      for (auto i = 0; i < n/2; ++i) {
        swap(*(left + i), *(beg - i - 1));
      }
      return s;
    }
};