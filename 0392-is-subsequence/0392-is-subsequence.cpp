class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(j<=t.size())
        {
            if(s[i] != t[j])
            {
                j++;
            }
            else
            {
                i++;
                j++;
            }
            if(i>=s.size())
            {
                return true;
            }
        }
        return false;
    }
};