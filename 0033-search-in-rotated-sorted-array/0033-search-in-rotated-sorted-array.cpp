class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if (arr[mid] == target)
            {
                return mid;
            } 
            if(arr[mid]>= arr[0]) //sorted
            {
                if(target >= arr[0] && target <= arr[mid])
                {
                    e = mid-1;
                }
                else
                {
                    s = mid+1;
                }
            }
            else
            {
                if(target> arr[mid] && target <=arr[n-1])
                {
                    s = mid+1;
                }
                else
                {
                    e = mid-1;
                }
            }
        }
        return -1;
    }
};