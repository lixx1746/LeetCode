class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int n = numbers.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++) mp[numbers[i]] = i;
        for(int i = 0; i < n; i++)
            if(mp.find(target - numbers[i]) != mp.end() && mp[target - numbers[i]] != i)
                return vector<int>{ i + 1, mp[target - numbers[i]] + 1 };
        }
};
