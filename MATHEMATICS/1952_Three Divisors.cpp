class Solution {
public:
    bool isThree(int n) {
        int count=0;
        int i;
        if(n<=0)
            return false;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            count+=1;
        }
         if(count==3)
         {
             return true;
         }
        return false;
        
        
    }
};
