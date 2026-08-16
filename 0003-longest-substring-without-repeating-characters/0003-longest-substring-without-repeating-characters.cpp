class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector<bool> freq(256, 0);
        int i=0,j=0;
        int n = s.size();
        int max_len = 0;
        while(j<n)
        {    
            while(freq[s[j]] == 1)
            {
                freq[s[i]] = 0;
                i++;
            }
            freq[s[j]] = 1;
            int curr_size = j-i+1;
            max_len = max(max_len, curr_size);
            j++;
        }
        return max_len;
    }
};