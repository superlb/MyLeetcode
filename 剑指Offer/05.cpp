class Solution {
public:
    string replaceSpace(string s) {
        string str;
        for(auto i : s)
        {
            if(i==' ')
                str.append("%20");
            else
                str.append(1,i);
        }
        return str;
    }
};