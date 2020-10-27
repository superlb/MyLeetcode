class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128,-1);
        int dp = 0;
        int maxnum = 0;
        int last = -1;
        for(int i=0;i<s.size();++i)
        {
            last = max(last,v[s[i]]);
            dp = i - last;
            maxnum = max(maxnum,dp);
            v[s[i]] = i;
        }
        return maxnum;
    }
};