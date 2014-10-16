class Solution {
public:
    string intToRoman(int num) {
     int nu[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
     string s[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
     string ans;
     for(int i = 0; i < 13; i++) {
        if(num >= nu[i]) {
            for(int j = 0; j < num / nu[i]; j++) ans += s[i];
            num -= (num / nu[i]) * nu[i];
        }
     }
     return ans;
    }
};
