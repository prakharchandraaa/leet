class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int s = nums.size();
        vector <int> n = nums;
        n.insert(n.end(), nums.begin(), nums.end());
        vector<int> v(s, -1); 
        stack<int> st  ;        
        for (int i = 2*(s - 1); i >= 0; i--) {
            while (!st.empty() && st.top() <= n[i]) {
                st.pop();
            }
            if(i<s)
            {if (!st.empty()) {
                v[i] = st.top();
            }}
            st.push(n[i]);
        }
        return v; 
    }
};