class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mp[256];
        memset(mp, -1, sizeof(mp));
        int ans = 0, l = 0;
        for(int i = 0; i < s.size(); i++) {
            if(mp[s[i]] >= l) l = mp[s[i]] + 1;
            mp[s[i]] = i;
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};
