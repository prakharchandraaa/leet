class Solution {
public:
    int countDigits(int num) {
        long long c = 0;
        int numc = num;
        vector <bool> freq(9,0);
        while(numc > 0)
        {   int d = numc%10;
            if(num%d==0)
            {
                c++;
            }
            numc = numc/10;
        }
        return c;
    }
};