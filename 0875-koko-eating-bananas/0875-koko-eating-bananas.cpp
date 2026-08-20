class Solution {
    bool ispossible(vector<int>&piles , int mid, int h)
    {
       int hour = 0;
       for(int i=0; i<piles.size(); i++)
        {
            /*if(piles[i] <= mid)
            {
                hour++;
            }
            else if(piles[i] % mid == 0) //cuurent box mein mid ke multiple hai
            {
                hour += piles[i]/mid;
            }
            else if(piles[i] % mid != 0)
            {
                hour += (piles[i]/mid)+1;
            }*/
            hour += (piles[i]+mid-1)/mid;
            if(hour > h)
            {
                return false;
            }
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = -1;
        int maxm = piles[0];
        for(int i=1; i < piles.size(); i++)
        { 
            maxm = max(piles[i],maxm);
        }
        int start=1, end = maxm;
        while(start<=end)
        {
            int mid = (start+end)/2; 
            if(ispossible(piles,mid,h))
            {
                ans = mid; 
                end = mid -1; 
            }
            else
            {
                start = mid + 1; 
            }
        }
        return ans;
    }
};