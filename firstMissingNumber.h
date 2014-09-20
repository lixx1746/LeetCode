class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        int ans = 1, i = 0;
        while(i < n) {
            if(A[i] > 0 && A[i] != i + 1 && A[i] <= n && A[A[i] - 1] != A[i]) swap(A[i], A[A[i] - 1]);
            else i++;
        }
        for(int i = 0; i < n; i++, ans++) if(A[i] != ans) break;
        return ans;
    }
};
