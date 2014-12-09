class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        if(*p == 0) return *s == 0;
        if(*(p + 1) != '*') {
            if(*s == *p || (*p == '.' && *s != 0)) return isMatch(s + 1, p + 1);
            else return 0;
        }
        else {
            while(*s == *p || (*p == '.' && *s != 0)) {
                if(isMatch(s, p + 2)) return 1;
                s++;
            }
            return isMatch(s, p + 2);
        }
    }
};
