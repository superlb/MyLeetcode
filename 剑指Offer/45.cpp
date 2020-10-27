class Solution {
public:
    string minNumber(vector<int>& nums) {
        vector<string> v;
        for(auto a:nums)
        {
            v.emplace_back(to_string(a));
        }
        sort(v.begin(),v.end(),[](const string &a,const string &b)->bool{return a+b<b+a;});
        string str;
        for(auto a:v)
        {
            str+=a;
        }
        return str;
    }
};