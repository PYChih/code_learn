#include <vector>
using std::vector;
int removeElement(vector<int>& nums, int val) { // NOLINT
  int k = 0;
  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] != val) {
      nums[k] = nums[i];
      ++k;
    }
  }
  return k;
}
