class Solution {
public:
    int sqrt(int x) {
        int r = x / 2 + 1, l = 0;
        while(l <= r) {
            long long mid = (l + r) / 2;
            long long res = mid * mid;
            if(res == x) return mid;
            else if(res < x) l = mid + 1;
            else r = mid - 1;
        }
        return r;
    }
};
