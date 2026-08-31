class Solution {
public:
    bool isPowerOfTwo(int n,int i=0) {
        if(pow(2,i) > n)
        {
            return false;
        }
        if(pow(2,i) == n)
        {
            return true;
        }
        else
        {
            return isPowerOfTwo(n,i+1);
        }
    }
};