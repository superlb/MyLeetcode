class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        solve(v,n,0,"");
        return v;
    }
    void solve(vector<string> &v,int left,int right,string str)
    {
        if(left==0&&right==0) v.push_back(str);
        else
        {
            if(left>0) solve(v,left-1,right+1,str+"(");
            if(right>0) solve(v,left,right-1,str+")");
        }
    }
};