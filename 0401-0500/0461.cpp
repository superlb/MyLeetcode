/*
Date: 2019年9月2日12:12:10
Time: 8ms
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int c = x ^ y;
        int sum = 0;
        for(int i=0;i<31;++i)
        {
            if(((c >> i) & 1))
            {
                ++sum;
            }
        }
        return sum;
    }
};
