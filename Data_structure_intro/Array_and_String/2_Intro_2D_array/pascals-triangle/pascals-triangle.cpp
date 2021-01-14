class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> temp;
        // generate first three
        if (numRows==0) return pascal;
        temp.push_back(1);
        pascal.push_back(temp);
        temp.clear();
        if (numRows==1) return pascal;
        temp.push_back(1);
        temp.push_back(1);
        pascal.push_back(temp);
        temp.clear();
        if (numRows==2) return pascal;
        int row_idx = 3; // i-th row have i elements.
        for (auto i=2; i<numRows; ++i){
            //first element
            temp.push_back(1);
            for (auto j=1; j<i; ++j){
                temp.push_back((pascal[i-1][j-1]+pascal[i-1][j]));
            }
            //final element
            temp.push_back(1);
            pascal.push_back(temp);
            temp.clear();
        }
        return pascal;
    }
};