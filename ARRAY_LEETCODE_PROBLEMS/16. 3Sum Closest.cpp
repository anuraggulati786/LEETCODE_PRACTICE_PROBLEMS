class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long closesum=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());  //sorted and then used two pinter in side an //loop//esy psy solution...
        for(int i=0;i<n-2;i++)    //0 to n-3  running of loop....
        {
            int l=i+1,h=n-1;
            while(l<h)
            {
                int sum=nums[i]+nums[l]+nums[h];   
                if(sum==target)
                    return sum;
                if(abs(target-closesum)>abs(target-sum))
                    closesum=sum;
                if(sum>target)
                    h--;
                if(sum<target)
                    l++;
            }
        }
        return closesum;
    }
};
