class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        for(int i = m - 1, j = n - 1; i >= 0 || j >= 0;) {
            int a_val = i < 0 ? INT_MIN : A[i];
            int b_val = j < 0 ? INT_MIN : B[j];
            A[i + j + 1] = a_val < b_val ? B[j--] : A[i--];
        }
    }
};
