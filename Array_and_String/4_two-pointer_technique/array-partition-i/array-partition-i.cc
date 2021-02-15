#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
using std::sort;

class Solution {
 public:
  int arrayPairSum(vector<int>& nums) { // NOLINT
    sort(nums.begin(), nums.end());
    // int n = nums.size()/2;
    int temp = 0;
    for (auto i = 0; i < nums.size() / 2; ++i) {
      // temp+= min(nums[2*i], nums[2*i+1]);
      temp += nums[2 * i];
    }
    return temp;
  }
};
