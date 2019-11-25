class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1,0);
        for(int i = 1;i<=num;++i)
            if(i%2)
                v[i]=v[i-1]+1;
            else
                v[i]=v[i/2];
        return v;
    }
};
