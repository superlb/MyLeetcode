/*
Date: 2019年8月31日13:30:03
Time: 8ms
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int len = S.length();
        int sum=0;
        for(int i=0;i<len;i++)
        {
            if(J.find(S[i])!=-1)
                ++sum;
        }
        return sum;
    }
};
