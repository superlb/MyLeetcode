class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        string str;
        while(i<s.size())
        {
            if(j<s.size() && s[j]!=' ')
            {
                ++j;
                continue;
            }
            else
            {
                if(j>i)
                    str = " " + s.substr(i,j-i) + str;
                while(j<s.size() && s[j]==' ')
                {
                    ++j;
                }
                i = j;
            }
        }
        return str.size()>0?str.substr(1,str.size()-1):str;
    }
};