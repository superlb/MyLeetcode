/*
Date: 2019年8月31日13:27:10
Time: 32ms
*/

class Solution {
public:
    int fib(int N) {
        int s[31];
        s[0]=0;s[1]=1;
        for(int i=2;i<=N;i++)
        {
            s[i]=s[i-1]+s[i-2];
        }
        return s[N];
    }
};
