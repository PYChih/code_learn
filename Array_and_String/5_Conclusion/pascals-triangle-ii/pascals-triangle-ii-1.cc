class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> ivec{1};
      vector<int> prv_row;
      for (auto i = 0; i < rowIndex; ++i) {  // run rowIndex times
          prv_row = ivec;
          ivec.push_back(1);  // rowIndex th row has rowIndex+1 elements
        for (auto j = 1; j < i + 1; ++j) {  // fix all current row number
          ivec[j] = prv_row[j-1] + prv_row[j];
        }
      }
      return ivec;
    }
};