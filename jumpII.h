class Solution {
public:
    int jump(int A[], int n) {
        if(n <= 1) return 0;
        int range = A[0], pos = 0, ans = 0, to;
        while(true) {
            if((to = pos + range) >= n -1) return ans + 1;
            for(int i = pos + 1; i <= to; i++) {
                if(A[i] + i > pos + range) {
                    pos = i;
                    range = A[i];
                }
            }
            ans++;
        }
    }
};
