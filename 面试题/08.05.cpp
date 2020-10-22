class Solution {
public:
    int multiply(int A, int B) {
        int s = 0;
        while(1)
        {
            if(B&1)
                s += A;
            B>>=1;
            if(B==0)
                break;
            A += A;
        }
        return s;
    }
};