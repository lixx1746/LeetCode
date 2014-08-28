class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        map<string, int> mp;
        string sorted_string, str;
        vector<string> ans;
        for(int i = 0; i < strs.size(); i++) {
            sorted_string = strs[i];
            str = strs[i];
            sort(sorted_string.begin(), sorted_string.end());
            if(mp.find(sorted_string) == mp.end()) mp[sorted_string] = i;
            else {
                ans.push_back(str);
                if(mp[sorted_string] != -1) {
                    ans.push_back(strs[mp[sorted_string]]);
                    mp[sorted_string] = -1;
                }
            }
        }
        return ans;
    }
};
