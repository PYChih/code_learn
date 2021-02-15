#include<iostream>
#include<vector>
#include<algorithm>
using std::swap;
using std::vector;

class Solution {
 public:
  void reverseString(vector<char>& s) { //NOLINT
    int first_index = 0, second_index = s.size()-1;
    while (first_index < second_index){
      swap(s[first_index], s[second_index]);
      ++first_index;
      --second_index;
    }
  }
};
