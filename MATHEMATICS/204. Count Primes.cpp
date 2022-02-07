class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool> arr(n+1,true);
        arr[0]=arr[1] = false;
        
        for(int i=2; i<n; i++) {
            if(arr[i]) {
                cnt++;
                for(int j=2*i; j<n; j+=i) {
                    arr[j] = false;
                }
            }
        }
        return cnt;
    }
};
