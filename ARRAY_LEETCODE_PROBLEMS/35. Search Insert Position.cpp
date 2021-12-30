class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
        int ans=0, low=0, high = nums.size()-1;
        
        // Corner Cases 
        if(target<nums[0]) return 0;
        if(target>nums[nums.size()-1]) return nums.size();
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                low = mid + 1;
                ans = low;
            }else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};
