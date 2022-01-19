class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1; i<n; i++) {
            if(nums[j]==nums[i]) {
                count=nums[i];
                break;
            }
            else {
                j++;
            }
        }
        return count;
    }
};


//////i modified our array b ut we wont have to modifi it .....

// need know;ledge about the set and ma[p and stack anms quesqu and dequeue.. so it come when i study it ...
