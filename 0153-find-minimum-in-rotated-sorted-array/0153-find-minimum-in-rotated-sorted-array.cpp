class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int minm;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] <= nums[n-1])
            {
                minm = nums[mid];
                e = mid-1;
            }
            else
            {
                s  = mid +1;
            }
        }
        return minm;
    }
};