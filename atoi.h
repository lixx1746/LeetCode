class Solution {
public:
    int atoi(const char *str) {
        const char *p = str;
        for(p = str; *p; p++) {
           if(*p == ' ') continue;
           if(*p == '+' || *p == '-' || *p >= '0' && *p <= '9') break;
           else return 0;
        }
        int flag = 1;
        if(*p && (*p == '+' || *p == '-')) { flag = *p == '+' ? 1 : -1; p++; }
        long long ans = 0;
        while(*p) {
            if(*p < '0' || *p > '9') break;
            ans = 10 * ans + (*p - '0');
            if(flag * ans >= INT_MAX) return INT_MAX;
            if(flag * ans <= INT_MIN) return INT_MIN;
            p++;
        }
        return flag * ans;
    }
};
