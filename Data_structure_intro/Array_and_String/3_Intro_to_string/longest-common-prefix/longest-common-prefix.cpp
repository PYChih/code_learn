class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        if (strs.size()==0){return prefix;}
        int index=0;
        while (index< (strs[0].size())){
            char temp = strs[0][index];
            //cout<<"cur_temp "<< temp<<endl;
            //cout<<"cur_idx "<< index<<endl;
            for (int i=1; i<strs.size(); ++i){
                if (index<(strs[i].size())){
                    if (strs[i][index]!=temp){
                        //cout<<"cur temp "<<temp<<endl;
                        //cout<<"cur str "<<strs[i][index]<<endl;
                        //cout<<"AAA"<<endl;
                        return prefix;
                    }
                }else {return prefix;}
            }
            prefix.push_back(temp);
            //cout<<temp<<endl;
            ++index;
        }
        //cout<<"AAA"<<endl;
        return prefix;

    }
};