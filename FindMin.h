class Solution {
public:
    int findMin(vector<int> &num) {
        int n = num.size();
        int l = 0,  r = n - 1;
        if(num[0] <= num[r]) return num[0];
        while(l < r) {
            int mid = (l + r) >> 1;
            if(mid < n - 1 && num[mid] > num[mid + 1]) return num[mid + 1];
            if(num[mid] > num[0]) l = mid + 1;
            else r = mid;
        }
        return num[l];
    }
};
