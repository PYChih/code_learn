class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        auto run_iter=nums.begin();
        if (run_iter==nums.end()){return -1;}
        run_iter+=1;
        int right_sum = accumulate(run_iter, nums.end(), 0);
        if (right_sum==0){return 0;}
        int left_sum=0;
        if (nums.size()<3){return -1;}
        for(; run_iter!=nums.end(); ++run_iter){
            left_sum+=*(run_iter-1);
            right_sum -= *run_iter;
            if (right_sum==left_sum){
                return (run_iter - nums.begin());
            } 
        }
        return -1;
    }
};