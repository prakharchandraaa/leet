class Solution {
   
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<string> nstr;
      vector<string>result;
      vector<vector<string>>arr;
      for(string s: strs)
      {
        sort(s.begin(),s.end());
        {
            nstr.push_back(s);
        }
      }
      for(int i = 0; i<nstr.size(); i++)
      { 
        for(int j = 0; j<nstr.size(); j++)
        {
            if(nstr[i]==nstr[j])
            {
                result.push_back(strs[j]);
            }
        }
        auto it = find(arr.begin(),arr.end(),result);
        if(it == arr.end())
        {
            arr.push_back(result);
        }
        result.clear();
    }
    return arr;
    }
};