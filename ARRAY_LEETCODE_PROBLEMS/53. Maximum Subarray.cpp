class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int max_sum=INT_MIN; //it will store the final answer
        int sum=0; 
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(max_sum<sum)
            //we are updating the value of sum_max if it is less than sum
                max_sum=sum;
            
            if (sum<0)
            //we are initialling sum as 0 every time whenever we a -ve value
                sum=0;
        }
        return max_sum;
    }
};
