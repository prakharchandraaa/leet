class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int max_area = 0;
        int current_height;
        for (int i = 0; i <= n; i++) {
            if(i == n)
            {
                current_height = 0;
            }
            else
            {
                current_height = heights[i];
            }
            int height, width;
            while (!st.empty() && heights[st.top()] > current_height) {
                height = heights[st.top()];
                st.pop();
                if(st.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - st.top() -1 ;
                }
                max_area = max(max_area, height * width);
            }
            st.push(i);
        }
        return max_area;
    }
};
