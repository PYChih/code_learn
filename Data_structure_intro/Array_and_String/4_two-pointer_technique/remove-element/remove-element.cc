class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {// NOLINT
    if (nums.empty()) return 0;
    int first_index = 0;
    for (auto i = 0; i < nums.size(); ++i) {
      if (nums[i] != val) {
        nums[first_index] = nums[i];
        ++first_index;
      }
    }
    return first_index;
  }
};
