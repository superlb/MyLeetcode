class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        func(v,"",0,0,n);
        return v;
    }
    void func(vector<string> &v,string str,int open,int close,int max)
    {
        if(open+close == max*2)
        {
            v.push_back(str);
            return;
        }
        if(open<max)
            func(v,str+"(",open+1,close,max);
        if(open>close)
            func(v,str+")",open,close+1,max);
    }
};
