class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=-1, sec=-1, idx=-1;
        for(int i=0; i<nums.size(); ++i){
            if (nums[i]>max){
                sec = max;
                max = nums[i];
                idx = i;
                continue;
            } else if (nums[i]>sec){
                sec = nums[i];
            }
        }
        return (max >= 2*sec) ? idx : -1;
    }
};