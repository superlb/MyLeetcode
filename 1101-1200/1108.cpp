/*
Date: 2019年8月31日13:25:11
Time: 8ms
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(int i=0;i<address.length();++i)
        {
            if(address[i]=='.')
            {
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
            else
            {
                str.push_back(address[i]);
            }
        }
        return str;
    }
};
