class Solution {
    int lowerBound(int A[], int l, int r, int target) {
        while(l <= r) {
            int mid = (l + r) / 2;
            if(A[mid] == target) return mid;
            else if(A[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return l;
    }
public:
    int searchInsert(int A[], int n, int target) {
        return lowerBound(A, 0, n - 1, target);

    }
};
