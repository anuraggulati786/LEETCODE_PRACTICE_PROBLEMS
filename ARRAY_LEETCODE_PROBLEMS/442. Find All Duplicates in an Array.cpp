class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

sort(nums.begin(), nums.end());  // sorted first and then 

    vector<int> v2;

    for(int i=0 ; i<nums.size()-1 ; i++){
         if(nums[i] == nums[i+1]){
             v2.push_back(nums[i]);
    } 
  }
    
   return v2; 
        

    }
};
