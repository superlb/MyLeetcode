class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> v(31,0);
        for(auto a:nums)
        {
            for(int i=0;i<31;++i)
            {
                if(a&1) ++v[i];
                a>>=1;
            }
        }
        int sum=0;
        for(int i=30;i>=0;--i)
        {
            if(v[i]%3) sum+=1;
            if(i!=0) sum<<=1;
        }
        return sum;
    }
};