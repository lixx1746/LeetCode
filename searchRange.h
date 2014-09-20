class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        int l = lower_bound(A, A + n, target) - A;
        int r = upper_bound(A, A + n, target) - A;
        vector<int> res(2, -1);
        if(A[l] != target) return res;
        return vector<int> {l, r - 1};
    }
};
