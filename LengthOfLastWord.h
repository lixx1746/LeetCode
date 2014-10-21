class Solution {
public:
    int lengthOfLastWord(const char *s) {
        const char *r = s;
        while(*r) r++;
        r--;
        while(r >= s && *r == ' ') r--;
        const char *l = r;
        while(l >= s && *l != ' ') l--;
        return r - l;
    }
};
