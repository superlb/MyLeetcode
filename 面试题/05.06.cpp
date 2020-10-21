class Solution {
public:
    int convertInteger(int A, int B) {
        int c = A ^ B;
        int t = 32,count = 0;
        while(t--)
        {
            if(c&1) ++count;
            c>>=1;
        }
        return count;
    }
};