// approch 1  using bitmanipulation 

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
        {AS
            return true;
        }
        else{
            return false;
        }
        
    }
};


// 2nd approch using recursion 


class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i=1;
        for(int j=1;j<=31;j++)
        {                     // simply we run a loop and check weather a number is multiple of                             //two or not by using left shifting of i by 1 each time   
            if(i==n)               //two or not by using left shifting of i by 1 each time  
                return true;
            i=i<<1;                 
        }
        return false ;
        
    }
};



