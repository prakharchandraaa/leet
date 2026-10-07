class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minm= min(word1.size(),word2.size());
        string ans ="";
        int i=0;
        while(i < minm)
            {  
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
                i++;
            }
         while(i < word2.size())
            {
                ans.push_back(word2[i]);
                i++;
            }
         while(i < word1.size())
            {
                ans.push_back(word1[i]);
                i++;
            }
        return ans;
    }
};