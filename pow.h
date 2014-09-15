class Solution {
public:
    double pow(double x, int n) {
        int flag = n < 0 ? 0 : 1;
        int m = flag ? n : -n;
        double res = 1;
        while(m > 0) {
            if(m & 1) res *= x;
            m >>= 1;
            x = x * x;
        }
        return flag ? res : 1.0 / res;
    }
};
