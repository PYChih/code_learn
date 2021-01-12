class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ivec;
        int num_row = matrix.size();
        int num_col = matrix[0].size();
        int row_times = num_col-1;
        int col_times = num_row-1;
        int cur_row_idx=0, cur_col_idx=0;
        // first row
        ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
        for (auto i=0; i<row_times; ++i){
            cur_col_idx+=1;
            ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
        }
        cout<<row_times<<" "<<col_times<<endl;
        while (col_times!=0){
            // col increase
            for (auto i=0; i<col_times; ++i){
                cur_row_idx+=1;
                ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
            }
            --col_times;
            if (row_times==0){return ivec;}
            // row decrease
            for (auto i=0; i<row_times; ++i){
                cur_col_idx-=1;
                ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
            }
            --row_times;
            if (col_times==0){return ivec;}
            // col decrease
            for (auto i=0; i<col_times; ++i){
                cur_row_idx-=1;
                ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
            }
            --col_times;
            if (row_times==0){return ivec;}
            // row increase
            for (auto i=0; i<row_times; ++i){
                cur_col_idx+=1;
                ivec.push_back(matrix[cur_row_idx][cur_col_idx]);
            }
            --row_times;
            if (col_times==0){return ivec;}
        }
        return ivec;
    }
};