class Solution {
public:
    int singleNumber(int A[], int n) {
        int ans = 0, count = 0, bit = 1;
        for(int i = 0; i < 32; i++) {
            for(int j = 0; j < n; j++) {
                if(A[j] & bit) count++;
            }
            if(count % 3) ans |= bit;
            bit <<= 1;
            count = 0;
        }
        return ans;
    }
};
