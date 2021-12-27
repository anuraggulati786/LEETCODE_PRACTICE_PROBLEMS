class Solution {                           // 0 ms faster than  100% ....
public:
    bool isPalindrome(long int x) {
        
        long int palin = 0;
        long int orignal = x;
        if(x<0)
            return false;
        while(x>0){
            int rem = x%10;
            palin = palin*10 + rem;
            x /= 10;
        }
        if(palin == orignal)
            return true;
        return false;
    }
};

// faster than 80% 

class Solution {
public:
    bool isPalindrome(int x) {
        long int palin=0;
        long int original=x;
        
        if(x<0)
            return false;
        
            while(x>0)
            {
            int rem=x%10;
              palin = palin*10  + rem;
             x=x/10;
                        
            }
            if(palin==original)
            
                return true;
        
                return false;
        
    
    }
};
