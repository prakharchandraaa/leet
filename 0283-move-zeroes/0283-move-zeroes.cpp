class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int start = 0 ;
        int end = 0;
            while(end<nums.size())
            {   
               if(nums[start]!= 0)
               {
                start++;
                end++;
                continue;
               } 
               if(nums[end]!=0)
               {
                nums[start] = nums[end];
                nums[end] = 0;
                start++;
                end++;
               }
               else
               {
                end++;
               }
            }
        return nums;
    }
};