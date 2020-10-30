class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        for(auto c:tasks)
        {
            ++v[c-'A'];
        }
        sort(v.begin(),v.end());
        int maxcount = 0;
        for(auto a:v)
            if(a==*v.rbegin())
                ++maxcount;
        return max( ((*v.rbegin())-1)*(n+1)+maxcount , (int)tasks.size() );
    }
};