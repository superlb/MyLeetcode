class Solution {
public:
    int reverseBits(int num) {
        int count = 0;
        vector<int> v;
        int t = 32;
        while(t--)
        {
            if(num&1)
                ++count;
            else
            {
                v.push_back(count);
                count = 0;
            }
            num >>= 1;
        }
        v.push_back(count);
        int maxnum=v[0];
        for(int i=0;i<v.size()-1;++i)
        {
            maxnum=max(maxnum,v[i]+v[i+1]+1);
        }
        return maxnum;
    }
};