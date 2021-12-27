class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size= nums.size();
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<size;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return i;
        
    }
};



// using xor bhai ...  88% faster...

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_num = 0;
    
        for(int i = 0; i < nums.size(); i++) {
            missing_num ^= i;
            missing_num ^= nums[i];
        }
        
        
        return missing_num ^ nums.size();
        
        
    }
};
