class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        int ans = 0;
        set<int> s;
        for(int i = 0; i < num.size(); i++) s.insert(num[i]);
        while(!s.empty()) {
            auto it = s.begin();
            int l = *it, r = *it + 1;
            while(s.find(l) != s.end()) s.erase(l--);
            while(s.find(r) != s.end()) s.erase(r++);
            ans = max(ans, r - l - 1);
        }
        return ans;
    }
};
