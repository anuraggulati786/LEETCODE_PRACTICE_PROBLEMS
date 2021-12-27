class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int xorr=0;
        for(int i=0;i<s.length();i++)
        {
            xorr=xorr^s[i];
        }
        for
            (int j=0;j<t.length();j++)
        {
            xorr=xorr^t[j];
        }
        return xorr;
        
    }
};
