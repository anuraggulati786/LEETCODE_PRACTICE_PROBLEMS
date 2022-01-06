class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int curr=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0) {
                curr=0;
            }
            
            else{
                
                curr++;
                maxi=max(maxi,curr);
            }
        }
        return maxi;
    }
};
