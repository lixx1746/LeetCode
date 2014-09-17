class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;
        int pp = 1, p = 1, cur = 0;
        for(int i = 2; i <= n; i++) {
            cur = p + pp;
            pp = p;
            p = cur;
        }
        return cur;
    }
};
