class Solution {
public:
    int findComplement(int num) {
        int i=0;
        int res=0;
        while(num)
        {
            if((num&1)==0)
                res=res+(1<<i);
            i+=1;
           num=num>>1; 
        }
       return res; 
    }
};
