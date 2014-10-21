class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        stack<int> st;
        int n = height.size();
        int ans = 0;
        for(int i = 0; i < n || !st.empty();) {
            if(st.empty() || (i < n && height[st.top()] < height[i])) st.push(i++);
            else {
                int id = st.top();
                st.pop();
                ans = max(ans, (st.empty() ? i : i - st.top() - 1) * height[id]);
            }
        }
        return ans;
    }
};
