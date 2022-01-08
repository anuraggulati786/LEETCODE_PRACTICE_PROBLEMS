class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    int last=-1;
     vector <int> v;
  
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return {first,last};
}
        
    
};
