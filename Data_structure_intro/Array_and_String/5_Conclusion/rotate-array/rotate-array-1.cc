class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      if (k > nums.size()) {
        k = k % nums.size();
      }
      vector<int> ivec;
      auto beg = nums.begin(), end = nums.end(), k_iter = nums.end() - k, run_iter = k_iter;
      while (run_iter != end) {
        ivec.push_back(*run_iter++);
      }
      while (beg != k_iter) {
        ivec.push_back(*beg++);
      }
      nums = ivec;
    }
};