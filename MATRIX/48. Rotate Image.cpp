class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
      // we doing the transpose of our matrix first   
        for(int i=0; i<n; i++) {             // loop for rows
            for(int j=i; j<n; j++) {          //loop for the columns 
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        // now we use our 2 pointer for each row 
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<(n/2); j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-1-j] ;             // n-1-j  for j=0  n-1-0   (n-1)  // for n-1-1 n-2                                                                      // right..it work like that ...
                matrix[i][n-1-j] = temp;
            } 
        }
     
    }
};

/* the basic idea for this is : TRANSPOSE OUR MATRIX FIRST 

 so : initial the matrix was 
 
 1 2 3 
 4 5 6 
 7 8 9 
 
 After transpose :--> diagonal willl be same right 
 
 1 4 7 
 2 5 8
 3 6 9
 
 // now we will easily do our operation for getting the desired result 
  
  we use 2-pointer for each row and swap the values 1-> pointer is at index 0 and 2-> is at last swap both 
  
  after doing all the above operations we will get the correct output ...
  
  7 4 1
  8 5 2 
  9 6 3 
  
  */
 

// now see the transpose how it works 
/*

 i=0 ,j=0;
 temp = matrix[0][0];
 matrix[0][0] = matrix[0][0];
 matrix[0][0] = temp;
 
 
 i=0 ,j=1;
 
 temp = matrix[0][1];
 matrix[0][1] = matrix[1][0];
 matrix[1][0] = temp 
 
 right like this it is going see..  the positions are swaped 
  
  */
