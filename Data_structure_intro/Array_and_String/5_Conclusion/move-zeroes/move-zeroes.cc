class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      if (nums.empty()) return;
      auto run = nums.begin();
      auto beg = run;
      while (beg != nums.end()) {
        if (*beg != 0) {
          swap(*run, *beg);
          ++run;
        }
        ++beg;
      }
    }
};