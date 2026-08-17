class Solution {
    bool ispossible(vector<int>&weights, int mid, int days)
    {
        int day = 1;
        int ship_load =0;
        for(int i=0; i<weights.size() ;)
        {
            if(ship_load + weights[i] <= mid)
            {
                ship_load += weights[i];
                i++;
            }
            else
            {
                day++;
                ship_load = 0;
            }
            //did we crossed the deadline?
            if(day > days)
            {
                return false;
            }
        }
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int minm_ship_capacity; //capacity
        int total = 0;
        for(int i=0; i < weights.size(); i++)
        { 
            total += weights[i];
        }
        int start=0, end = total;
        while(start<=end)
        {
            int mid = (start+end)/2; //assume at max 'mid' caapcity of ship
            if(ispossible(weights,mid,days))
            {
                minm_ship_capacity = mid; //storing if it is correct
                end = mid - 1; //reducing capacity
            }
            else
            {
                start = mid + 1; //increasing capacity
            }
        }
        return minm_ship_capacity;
    }
};