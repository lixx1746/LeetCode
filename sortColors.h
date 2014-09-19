class Solution {
public:
    void sortColors(int A[], int n) {
        int l = 0, r = n;
        for(int i = 0; i < r;) {
            if(A[i] == 2) swap(A[--r], A[i]);
            else if(A[i++] == 0) swap(A[l++], A[i - 1]);
        }
    }
};
