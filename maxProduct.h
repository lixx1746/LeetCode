class Solution {
public:
    int maxProduct(int A[], int n) {
        if(n == 1) return A[0];
        int ans = INT_MIN, pos_pre = 0, neg_pre = 0;
        for(int i = 0; i < n; i++) {
          if(!(A[i] >> 31)) {
                pos_pre = max(A[i], A[i] * pos_pre);
                neg_pre *= A[i];
            }
            else {
                int temp = neg_pre;
                neg_pre = min(A[i], A[i] * pos_pre);
                pos_pre = A[i] * temp;
            }
            ans = max(ans, pos_pre);
        }
        return ans;
    }
};
