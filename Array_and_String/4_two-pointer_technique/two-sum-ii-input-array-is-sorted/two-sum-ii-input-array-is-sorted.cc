#include <iostream>
#include <vector>
using std::vector;
class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {// NOLINT
    int first_index = 0, second_index = numbers.size() - 1;
    while (first_index < second_index) {
      int temp = numbers[first_index] + numbers[second_index];
      if (temp > target) {
        second_index -= 1;
      } else if (temp < target) {
        first_index += 1;
      } else if (temp == target) {
        return vector<int>{first_index + 1, second_index + 1};
      }
    }
    return numbers;
  }
};
