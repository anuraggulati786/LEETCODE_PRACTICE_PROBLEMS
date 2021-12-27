class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int i;
        for(i=0;i<=n;i++)
        {
            int setbit;
            setbit=__builtin_popcount(i);
            ans.push_back(setbit);
            
        }
        return ans;
    }
};
