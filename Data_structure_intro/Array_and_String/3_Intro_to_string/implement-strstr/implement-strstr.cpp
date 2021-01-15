class Solution {
public:
    int strStr(string haystack, string needle) {
        int needle_size = needle.size();
        if (needle.size()==0) {return 0;}
        if (haystack.size()==0){return -1;}
        if (needle.size()>haystack.size()){return -1;}
        string::size_type fir_idx=0;
        while ( (fir_idx+needle.size())<=(haystack.size()) ){
            auto cur_str = haystack.substr(fir_idx, needle_size);
            if (cur_str == needle){
                return fir_idx;
            }
            ++fir_idx; 
        }
        cout<<"end while"<<endl;
        return -1;
        
    }
};