class Solution {
public:
    int maxArea(vector<int>& height) {
        int beg = 0, end = height.size()-1;
        
        int lowerT = 0; // lower height amongst the two towers
        int maxArea = 0; // maxArea
        int distance = 0; // distance between the towers, did not need an extra variable but better for explanation
        
        
        // go greedy and keep calculating distance and area and compare
        // greedy because the next step i.e., beg++ or end-- is decided based on greed of expecting a bigger area since current tower is bigger.
        
        while(beg < end) {
            lowerT = min(height[beg], height[end]);
            distance = end - beg;
            
            maxArea = max(maxArea, distance * lowerT);
            
            if(height[beg] < height[end])
                beg++;
            else
                end--;
        }
        
        return maxArea;
        
        
    }
};
