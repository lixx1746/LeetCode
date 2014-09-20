class Solution {
public:
    int search(int A[], int n, int target) {
        int l = 0, r = n - 1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(A[mid] == target) return mid;
            if(A[mid] < target && A[mid] > A[l]) l = mid + 1;
            else if(A[mid] > target && A[mid] < A[r]) r = mid - 1;
            else if(A[l] == target) return l;
            else l++;
        }
        return -1;
    }
};
