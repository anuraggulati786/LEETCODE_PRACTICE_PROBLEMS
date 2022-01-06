class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     for(int i=0; i<arr.size(); i++)
    {
        int key = arr[i];
        for(int j=i+1; j<arr.size(); j++)
        {
            if(key == 2*arr[j] || arr[j] == 2*key)
                return true;
        }
    }
    
    return false;
        
        
    }
};
