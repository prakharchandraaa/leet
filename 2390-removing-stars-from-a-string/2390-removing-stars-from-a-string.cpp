class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        string str;
        for(int i : s)
        {   
            if(i=='*')
            {
                stk.pop();
            }
            else
            {
                stk.push(i);
            }
        }
        while(stk.empty()==false)
        {
            str.push_back(stk.top());
            stk.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};