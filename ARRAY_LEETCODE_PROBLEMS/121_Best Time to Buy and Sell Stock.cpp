class Solution {                                     //  solution number 1......
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=  INT_MIN;
        int min_index=prices[0];
        for(int i=1;i<prices.size();i++)
            
        {
            if(prices[i]-min_index>max_profit)
            {
                max_profit=prices[i]-min_index;
            }
            if(prices[i]<min_index)
            {
                min_index=prices[i];
            }
            
        }
        if(max_profit<0)
            return 0;
        return max_profit;
    }
};


// solution  number two


class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mini=INT_MAX;
    int maxi=INT_MIN;
	
    for(int i=0;i<prices.size();i++)
    {
	
        mini=min(prices[i],mini);
        maxi=max(maxi,prices[i]-mini);
        
    }
    return maxi;
    
}
};




