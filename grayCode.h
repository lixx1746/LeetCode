class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res(1, 0);
        for(int i = 0; i < n; i++) {
            int b = 1 << i;
            for(int j = 1 << i; j >= 1; j--) {
                int cur = res[j - 1];
                res.push_back(cur | b);
            }
        }
        return res;
    }
};
