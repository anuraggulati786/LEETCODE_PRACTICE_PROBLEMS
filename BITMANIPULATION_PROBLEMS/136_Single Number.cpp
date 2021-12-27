// approch 1 : linear time O(n) and constant time :O(1)..

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res=res^nums[i];
        }
       return res; 
    }

};




