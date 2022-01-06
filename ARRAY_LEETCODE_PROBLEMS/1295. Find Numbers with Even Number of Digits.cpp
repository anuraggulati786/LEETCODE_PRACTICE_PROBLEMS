class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int count=0;
        for(int index=0;index<nums.size();index++)
        {
             int digit=0;
            while(nums[index]>0)
            {
                nums[index]=nums[index]/10;
                digit++;
            }
            if(digit%2==0)
                count++;
        }
        return count;
        
    }
};
