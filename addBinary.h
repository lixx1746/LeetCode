class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int sa = a.size() - 1, sb = b.size() - 1;
        int k = max(sa, sb) + 1;
        string ans(k, '0');
        while(sa >= 0 || sb >= 0) {
            int a_val = sa >= 0 ? a[sa--] - '0' : 0;
            int b_val = sb >= 0 ? b[sb--] - '0' : 0;
            int sum = a_val + b_val + carry;
            ans[--k] = sum % 2 + '0';
            carry = sum / 2;
        }
        if(carry) ans.insert(ans.begin(), carry + '0');
        return ans;
    }
};
