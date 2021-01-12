class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ivec, temp;
        int num_row = matrix.size(); // num_row
        if (matrix.size()==0) return ivec; // check for empty matrix
        int num_col = matrix[0].size();
        for (int diag_idx=0; diag_idx<(num_row+num_col-1); ++diag_idx){//go over every diagonal
            // clear
            temp.clear();
            int col_index = (diag_idx<(num_col-1)?diag_idx:num_col-1);
            int row_index = (diag_idx<(num_col-1)?0:diag_idx - (num_col-1));
            while(col_index>=0 && row_index<num_row){
                //cout<<row_index<<col_index<<" ";
                temp.push_back(matrix[row_index][col_index]);
                --col_index;
                ++row_index;
            }
            //cout<<endl;
            if (diag_idx%2==1){
                ivec.insert(ivec.end(), temp.begin(), temp.end());
            } else{
                ivec.insert(ivec.end(), temp.rbegin(), temp.rend());
            }
            
        }
        
        return ivec;
    }
};