class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();
        int carry = 1, sum = 0;
        for(int i = n - 1; i >= 0; i--) {
            sum  = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if(carry) digits.insert(digits.begin(), carry);
        return digits;
    }
};
