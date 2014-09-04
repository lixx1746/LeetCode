class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int n = num.size();
        int res = num[0] + num[1] + num[2];
        sort(num.begin(), num.end());
        for(int i = 0; i < n - 2; i++) {
            if(i >= 1 && num[i] == num[i - 1]) continue;
            int l = i + 1;
            int r = n - 1;
            while(l < r) {
                int can = num[i] + num[l] + num[r];
                if(can == target) return target;
                else if(can < target) l++;
                else r--;
                if(abs(can - target) < abs(target - res)) res = can;
            }
        }
        return res;
    }
};
