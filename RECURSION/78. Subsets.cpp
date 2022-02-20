class Solution {
    void solve(vector<int>& nums, int index , vector<int> output, vector<vector<int>>& ans) {
        
        // base case
        if(index>=nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        // exclude
        
        solve(nums,index+1,output,ans);
        
        // include
        output.push_back(nums[index]);
        solve(nums , index+1 , output , ans);
        
        
    }
    public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums , 0 , output , ans);
        return ans;
    }
};
