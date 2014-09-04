class Solution {
public:
    bool canJump(int A[], int n) {
        int range = 0;
        for(int i = 0; i <= range; i++) {
            if(A[i] + i >= n - 1) return true;
            range = max(range, A[i] + i);
         }
        return false;
    }
};
