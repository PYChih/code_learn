#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::max;
class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {//NOLINT
    int max_num = 0, current_consecutive = 0;
    for (auto i : nums) {
      if (i == 1) {
        ++current_consecutive;
      } else {
        max_num = max(max_num, current_consecutive);
        current_consecutive = 0;
      }
    }
    max_num = max(max_num, current_consecutive);
    return max_num;
  }
};
