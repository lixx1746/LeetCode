class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        int len = num.size();
        sort(num.begin(), num.end());
        vector<vector<int> > res;
        for(int i = 0; i < len; i++) {
            if(i > 0 && num[i] == num[i - 1]) continue;
            int l = i + 1, r = len - 1;
            while(l < r) {
                int sum = num[i] + num[l] + num[r];
                if(sum == 0) {
                    int t[] = { num[i], num[l], num[r] };
                    vector<int> sol;
                    for(int k = 0; k < 3; k++) sol.push_back(t[k]);
                    res.push_back(sol);
                    l++; r--;
                    while(l < r && num[l] == num[l - 1]) l++;
                    while(r > l && num[r] == num[r + 1]) r--;
                }
                else if(sum < 0) l++;
                else r--;
            }
        }
        return res;
    }
};
