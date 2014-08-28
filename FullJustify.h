class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        vector<string> ans;
        string line = "";
        int count = 0, i = 0;
        for(; i < words.size();) {
            if(count == 0 || line.size() + words[i].size() < L) {
                if (count > 0) line += " ";
                line += words[i++];
                count++;
            }
            else {
                line = decorate_line(words, L - line.size() + count - 1, i - count, count - 1); // decorate this line, insert some spaces...
                ans.push_back(line);
                count = 0;
                line.clear();
                }
            }
            line += string(L - line.size(), ' ');
            ans.push_back(line);
            return ans;
        }
private:
  string decorate_line(vector<string> &str, int space_left, int left_index, int space_number) {
        string ans = "";
        for(int i = space_number; i > 0; i--) {
            ans += str[left_index++];
            int k = space_left % i ?  space_left / i + 1 : space_left / i ;
            ans += string(k, ' ');
            space_left -= k;
            }
        ans += str[left_index] + string(space_left, ' ');
        return ans;
    }
};
