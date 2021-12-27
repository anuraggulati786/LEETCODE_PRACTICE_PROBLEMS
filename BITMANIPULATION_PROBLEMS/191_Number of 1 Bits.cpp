// method 1 using inbuilt fxn...(__builtin_popcount(number))..
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        ans=__builtin_popcount(n);
        return ans;
        
    }
};


// second method   usinf linear time complexity O(n) .. const time O(1)/..

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
        	
        	int rem =n%2;
            n = n>>1;
        	if((rem & 1)==1)
        	{
        		ans+=1;
			}
		}
        return ans;
        
    }
};
