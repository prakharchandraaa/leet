class Solution {
    bool isPossible(vector<int>nums, int k, int mid)
    {
        int subarray = 1;
        int sum = 0;
        for(int i=0; i<nums.size();)
        {
            if(sum + nums[i]<= mid)
            {
                sum += nums[i];
                i++;
            }
            else
            {
                subarray++;
                sum = 0;
            }
            if(subarray > k)
            {
                return false;
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int start = 1;
        int sum = 0;
        for(int i = 0; i<nums.size() ; i++)
        {
            sum += nums[i];
        }
        int end = sum;
        int ans = 0;
        while(start<=end)
        {   
            int mid = (start+end)/2; 
            if(isPossible(nums,k,mid))
            {
                ans = mid;
                end = mid -1;
            }
            else
            {
                start = mid +1;
            } 
        }
        return ans;
    }
};