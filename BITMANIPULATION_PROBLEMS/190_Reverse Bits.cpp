// 1st  approch easy and efficient 

class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {                                      // let n =1011001
       int ans=0;
        for(int i=0;i<31;i++)   
        {                                  // for 1st iteration rem = htis last bit =1;
            int rem = n % 2;
            n = n >> 1;                    // n is right shifted now n is = 101100.....1->
            ans=ans+rem;                    // now asn = 0+rem(1) ..  that is ans =1 and now we want to multiply by 10 in it we dont the rem all time it make other answer it will add bit only but we want to reverse the bits so we take the remainder and multiply it with 10 and add other remainder and again multiply by 10 and so on...
            ans=ans<<1;                    // for making it multiple of 10 
        }
         ans=ans+n;                        // now for the last bit which is different we add   the given number n with our reversed bits answer ans...and we got the correct answer if we didnt this step then our last bit is remains left and hence answer is changed ...
        return ans;
    }
};

