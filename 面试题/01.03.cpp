class Solution {
public:
    string replaceSpaces(string S, int length) {
        string str;
        for(auto i : S)
        {
            if(i==' ')
                str.append("%20");
            else
                str.append(1,i);
            if(--length==0) break;
        }
        return str;
    }
};