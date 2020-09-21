class Solution {
public:
    int numTrees(int n) {
        vector<int> v(n+1,0);
        v[0]=1;v[1]=1;
        for(int i=2;i<=n;++i)
        {
            int sum=0;
            for(int j=0;j<i;++j)
            {
                sum+=v[j]*v[i-j-1];
            }
            v[i]=sum;
        }
        return v[n];
    }
};