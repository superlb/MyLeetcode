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

class Solution {
public:
    string replaceSpace(string s) {
        string str;
        for(auto a : s) {
            if (a == ' ') {
                str += "%20";
            } else {
                str += a;
            }
        }
        return str;
    }
};