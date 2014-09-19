class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 2) return n;
        int step = 2, len = 2;
        for(int i = 2; i < n; i++) {
            if(A[i] != A[len - step]) A[len++] = A[i];
        }
    return len;
    }
};
