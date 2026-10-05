class Solution {
    void solve(vector<string>&res, int n, int open, int close, string s)
    {
        //base case
        if(open == n && close == n)
        {
            res.push_back(s);
            return;
        }
        if(open < n)
        {   
            s.push_back('(');
            solve(res,n,open+1,close,s);
            s.pop_back();
        }
        if(open > close)
         {   
            s.push_back(')');
            solve(res,n,open,close+1,s);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res,n,0,0,"");
        return res;
    }
};