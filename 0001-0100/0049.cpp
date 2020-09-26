class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        auto str(strs);
        map<string,vector<string>> m;
        for(auto i : str)
        {
            string s = i;
            sort(i.begin(),i.end());
            m[i].push_back(s);
        }
        for(auto it : m)
            res.push_back(it.second);
        return res;
    }
};