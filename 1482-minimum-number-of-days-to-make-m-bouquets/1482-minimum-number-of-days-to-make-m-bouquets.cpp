class Solution {
    bool isPossible(vector<int>&bloomDay, long long m, long long k, long long mid)
    {   
        int count =0, noofbouquet=0;
       for(int i = 0; i<bloomDay.size(); i++)
       { 
        if(bloomDay[i]<=mid)
        {
            count++;
        }
        else
        {   
            noofbouquet += (count/k);
            count = 0;
        }
       } 
       noofbouquet += (count/k);
       if(noofbouquet >= m)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
public:
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        long long start = *min_element(bloomDay.begin(),bloomDay.end());
        long long end = *max_element(bloomDay.begin(),bloomDay.end());
        long long ans;
        if(m*k > bloomDay.size())
        {
            return -1;
        }
        while(start<=end)
        {
            long long mid = (start+end)/2;
            if(isPossible(bloomDay,m,k,mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid +1;
            }
        }
        return ans;
    }
};