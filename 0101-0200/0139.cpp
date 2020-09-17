class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> v(s.size()+1,0);
        v[0]=1;
        for(int i=1;i<=s.size();++i)
        {
            for(int j=0;j<s.size();++j)
            {
                if(v[j]&&find(wordDict.begin(),wordDict.end(),s.substr(j,i-j))!=wordDict.end())
                {
                    v[i]=1;
                    break;
                }   
            }
        }
        return v[s.size()];
    }
};