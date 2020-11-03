class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        string str;
        while(s[i]==' ')
        {
            ++i;++j;
        }
        while(1)
        {
            while(j<s.size() && s[j]!=' ')
            {
                ++j;
            }
            string tmp = s.substr(i,j-i);
            reverse(tmp.begin(),tmp.end());
            str += tmp + " ";
            i = j;
            while(i<s.size() && s[i]==' ')
            {
                ++i;++j;
            }
            if(i>=s.size())
            {
                break;
            }
        }
        str.pop_back();
        return str;
    }
};