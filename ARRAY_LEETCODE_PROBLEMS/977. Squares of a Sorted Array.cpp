class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        long int k;
        for(int i=0;i<nums.size();i++) {
            k=nums[i]*nums[i];
            ans.push_back(k);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
