class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 0);
        for(int i = 0; i <= rowIndex; i++) {
            res[i] = 1;
            for(int j = i - 1; j > 0; j--) res[j] = res[j] + res[j - 1];
            }
        return res;
    }
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        for(int i = 0; i < numRows; i++) res.push_back(getRow(i));
        return res;
    }
};
