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
