class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        int num=0, exp=0;
        while(it!=digits.rend()){
            if (*it!=9){
                *it+=1;
                return digits;
            } else {
                *it=0;
                ++it;
            }
            }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};