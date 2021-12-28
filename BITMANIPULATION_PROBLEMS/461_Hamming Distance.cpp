class Solution {
public:
int hammingDistance(int x, int y) {
int count =0, a=0,b=0;
while(x > 0 || y > 0){
a = x & 1;
x = x >> 1;
b = y & 1;
y = y >> 1;

        if(a!=b)
            count++;
    }
    
    return count;
}
};
