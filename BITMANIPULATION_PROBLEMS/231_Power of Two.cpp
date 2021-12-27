class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res=0;
        res=__builtin_popcount(n);
        if(n<0)
        {
            return false;
        }
        if(res==1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};
