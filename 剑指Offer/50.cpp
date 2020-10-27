class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> v(26,0);
        vector<int> q;
        for(auto a : s)
        {
            if(v[a-'a']==0)
                q.push_back(a-'a');
            ++v[a-'a'];
        }
        for(auto a : q)
        {
            if(v[a]==1)
                return a+'a';
        }
        return ' ';
    }
};