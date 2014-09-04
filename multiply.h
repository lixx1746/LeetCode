class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string res(n1 + n2, '0');
        for(int i = n1 - 1; i >= 0; i--) {
            int carry = 0;
            for(int j = n2 - 1; j >= 0; j--) {
                int temp = (res[i + j + 1] - '0') + (num2[j] - '0') * (num1[i] - '0') + carry;
                res[i + j + 1] = temp % 10 + '0';
                carry = temp / 10;
            }
            res[i] += carry;
        }
        while(res.size() > 1 && res[0] == '0') res.erase(0, 1);
        return res;
    }
};
