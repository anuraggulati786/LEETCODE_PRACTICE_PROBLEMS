class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> >v;
        if(nums.size()<3)
            return v;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            int j=i+1, k=nums.size()-1;
            while(j < k) {
            int sum = nums[i]+nums[j]+nums[k];
            if(sum == 0)
            {
                vector<int>v1={nums[i],nums[j],nums[k]};
                v.push_back(v1);
                int curr_j=j, curr_k=k;
                while(j<nums.size() && nums[curr_j]==nums[j])
                    j++;
                while(j<k && nums[curr_k]==nums[k])
                    k--;
            }
            else if(sum < 0)
                j++;
            else
                k--;
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};
