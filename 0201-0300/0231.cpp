class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n>1)
        {
            if(n & 1)
                return false;
            n >>= 1;
        }
        return n==1;
    }
};