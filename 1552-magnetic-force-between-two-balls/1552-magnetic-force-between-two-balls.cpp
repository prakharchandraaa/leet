class Solution {
    bool isPossible(vector<int>&position, int mid, int m)
    {
        int ball = 1;
        int pos = position[0];
        for(int i=1;i<position.size();i++)
        {   
            if(position[i] - pos >= mid)
            {
                ball++;
                pos = position[i];
            }
            if(ball == m)
            {
                return true;
            }
        }
    return false;    
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int start = 1, end = position[n-1] - position[0];
        int ans = -1;
        while(start<=end)
        {
            int mid = (start + end)/2;
            if(isPossible(position,mid,m))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid-1;
            }
        }
        return ans;
    }
};