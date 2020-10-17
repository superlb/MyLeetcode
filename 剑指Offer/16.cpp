class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(n==-1) return 1.0/x;
        if(n&1) return myPow(x*x,n>>1)*x;
        else return myPow(x*x,n>>1);
    }
};