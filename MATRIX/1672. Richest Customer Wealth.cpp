class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = INT_MIN;
        for(int row=0; row<accounts.size(); row++) {
            int curr_sum = 0;
            for(int col=0; col<accounts[row].size(); col++) {
                curr_sum = curr_sum + accounts[row][col];
            }
            if(curr_sum > max_sum) {
                max_sum = curr_sum;
            }
        }
        return max_sum;
    }
};
