class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        
        for(int i=0; i<nums.size(); i++) {
            ans[(k+i)%nums.size()] = nums[i];
        }
            // copy the temp to nums
        
        for(int i=0; i<nums.size(); i++) {
            nums[i]=ans[i];
        }
        
        
    }
};
