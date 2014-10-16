class Solution {
public:
    int trap(int A[], int n) {
        int l[n + 5], r[n + 5];
        int rr = INT_MIN, ll = INT_MIN;
        for(int i = 0; i < n; i++) l[i] = ll = max(ll, A[i]);
        for(int j = n - 1; j >= 0; j--) r[j] = rr = max(rr, A[j]);
        int sum = 0;
        for(int i = 0; i < n; i++) sum += min(l[i], r[i]) - A[i];
        return sum;
    }
};
