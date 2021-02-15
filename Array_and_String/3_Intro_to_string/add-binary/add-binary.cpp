class Solution {
public:
    string addBinary(string a, string b) {
        string sum;
        auto beg_a = a.rbegin();
        auto beg_b = b.rbegin();
        int inc = 0, cur_a=0, cur_b=0, cur_num=0;
        while (beg_a!=a.rend() || beg_b!=b.rend()){
            //convert to int
            if (beg_a!=a.rend()){
                cur_a = *beg_a - '0';
                ++beg_a;
            } else{
                cur_a = 0;
            }
            if (beg_b!=b.rend()){
                cur_b = *beg_b - '0';
                ++beg_b;
            } else{
                cur_b = 0;
            }
            cur_num = cur_a+cur_b+inc;
            if (cur_num==0){
                inc = 0;
                sum.push_back('0');
            } else if (cur_num==1){
                inc = 0;
                sum.push_back('1');
            } else if (cur_num==2){
                inc = 1;
                sum.push_back('0');
            } else if (cur_num==3){
                inc = 1;
                sum.push_back('1');
            }
        }
        if (inc==1){
            sum.push_back('1');
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};