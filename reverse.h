class Solution {
public:
    int reverse(int x) {
        bool flag = true;
        if(x < 0) flag = false;
        long long abs_x = abs(x);
        long long ans = 0;
        while(abs_x) {
            ans = 10 * ans + abs_x % 10;
            abs_x /= 10;
        }
        if(!flag) ans = -ans;
        if(ans > INT_MAX) ans = INT_MAX;
        if(ans < INT_MIN) ans = INT_MIN;
        return (int) ans;
    }
};
