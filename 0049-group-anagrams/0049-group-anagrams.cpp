class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for (string s : strs) {
            string canonical = s;
            sort(canonical.begin(), canonical.end());
            mp[canonical].push_back(s);
        }
        
        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};

/* UNORDERED MAP
   KEY :     VALUE
   ___________________
   aet : [eat,tea,ate]
   ant : [tan,nat]
   abt : [bat] 

   RESULT
   pushed values
   [["eat","tea","ate"],["tan","nat"],["bat"]]
   */