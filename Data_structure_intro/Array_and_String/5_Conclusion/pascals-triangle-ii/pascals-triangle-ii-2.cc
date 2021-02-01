class Solution {
public:
    vector<int> getRow(int rowIndex) {
      int n = rowIndex;
      long long temp = 1;
      vector<int> result{1};
      if (n == 0) {return result;}
      auto tempv = result;
      tempv.push_back(1);
      if (n == 1) {return tempv;}
      // begin from n = 2;
      for (int k = 0; k < n; ++k) {
        temp *= (n-k);
        temp /= (k+1);
        cout << "k = " << k << endl;
        cout << temp << endl;
        result.push_back(temp);
      }
      return result;
    }
};