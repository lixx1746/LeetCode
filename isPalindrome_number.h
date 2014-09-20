class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        long long temp = abs(x);
        while(temp) {
            rev = 10 * rev + temp % 10;
            temp /= 10;
        }
        return x == rev;
    }
};
