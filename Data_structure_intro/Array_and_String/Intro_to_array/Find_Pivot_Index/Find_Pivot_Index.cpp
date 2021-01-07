class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_val = 0;
        for(int val : nums){
            sum_val += val;
        }
        int sz = nums.size();
        int pre = 0;
        for(int i = 0; i < sz; ++i){
            if(pre*2 + nums[i] == sum_val){
                return i;
            }else{
                pre += nums[i];
            }
        }
        return -1;
    }
};