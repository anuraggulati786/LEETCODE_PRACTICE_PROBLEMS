class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();  // total rows 
        int col = matrix[0].size();  // total columns 
        
                 
        int row_index = 0; // we startting from the first row last column ....alright 
        int col_index = col-1;
            
            while(row_index < row && col_index >=0) {
                int element = matrix[row_index][col_index];
                if(element == target) {
                    return 1;
                }
                else if(element > target) {
                    col_index--;
                }
                else {
                    row_index ++;
                }
            }
        return 0;
    }
};
