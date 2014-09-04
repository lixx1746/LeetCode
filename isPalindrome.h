class Solution {
    bool isAlpha(char c) { return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'); }
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int r = s.size() - 1;
        int l = 0;
        while(l <= r) {
            if(isAlpha(s[l]) && isAlpha(s[r])) if(s[l++] != s[r--]) return false;
            if(!isAlpha(s[l])) l++;
            if(!isAlpha(s[r])) r--;
            }
         return true;
        }
};
