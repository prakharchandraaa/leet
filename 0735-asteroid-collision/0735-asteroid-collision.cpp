class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto &ast: asteroids)
        {
            bool alive = true;
            while(!st.empty() && ast < 0 and st.top() > 0)
            {
                if(abs(st.top()) < abs(ast))
                {
                    st.pop();
                }
                else if(abs(st.top()) == abs(ast))
                {
                    st.pop();
                    alive =false;
                    break;
                }
                else
                {
                    alive=false;
                    break;
                }
            }
            if(alive)
            {
                st.push(ast);
            }
        }
        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; --i) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
