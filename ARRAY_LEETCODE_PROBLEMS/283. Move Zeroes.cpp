class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};



### two pionter approch ######

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i;
        int j=0;
        int n=nums.size();
        
        for(i=0; i<n; i++) {
            
            if(nums[i]!=0) {
                swap(nums[j],nums[i]);
                j++;
            }
            
        } 
        
    }
};
