class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int i=0,j=0;
        int maxnum = 0;
        vector<int> v(256,0);
        while(i<s.size()&&j<s.size())
        {
            if(v[s[j]]==0)
            {
                v[s[j++]] = 1;
                maxnum = max(maxnum,j-i);
            }
            else
            {
                v[s[i++]] = 0;
            }
        }
        return maxnum;
    }
};