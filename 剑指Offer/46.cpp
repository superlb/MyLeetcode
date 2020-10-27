class Solution {
public:
    int translateNum(int num) {
        string str = to_string(num);
        vector<int> v(str.size(),0);
        for(int i=0;i<str.size();++i)
        {
            if(i==0)
            {
                v[i] = 1;
            }
            else if(i==1)
            {
                v[i] = (((str[i]-'0') + (str[i-1]-'0')*10)>25?0:1) + v[i-1];
            }
            else
            {
                v[i] = ((str[i-1]=='0'||((str[i]-'0') + (str[i-1]-'0')*10)>25)?0:v[i-2]) + v[i-1];
            }
        }
        return *v.rbegin();
    }
};