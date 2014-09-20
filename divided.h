class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dived = abs((long long) dividend);
        long long divor = abs((long long) divisor);
        long long res = 0;
        while(dived >= divor) {
            for(long long a = divor, b = 0; a <= dived; ++b, a = a << 1) {
                dived -= a;
                res += 1 << b;
            }
        }
        return ((dividend ^ divisor) >> 31) ? -res : res;
    }
};
