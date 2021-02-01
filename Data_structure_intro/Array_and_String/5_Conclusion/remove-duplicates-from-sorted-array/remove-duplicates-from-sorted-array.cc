class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()) return 0;
      auto beg = nums.begin();
      auto run = beg;
      while (beg != nums.end()) {
        if (*beg != *run) {
          swap(*++run, *beg);
        }
        ++beg;
      }
      return run - nums.begin()+1;
    }
};