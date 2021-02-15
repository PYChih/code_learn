class Solution {
 public:
  int minSubArrayLen(int s, vector<int>& nums) {
    int ans = INT_MAX;
    auto beg = nums.begin(), end = nums.end();
    int sum = 0;
    auto left = beg;
    while (beg != end) {
      sum += *beg;
      while (sum >= s) {
        int num_element = (beg - left) + 1;
        ans = min(ans, num_element);
        sum -= *left;
        ++left;
      }
      ++beg;
    }
    return (ans != INT_MAX) ? ans : 0;
  }
};