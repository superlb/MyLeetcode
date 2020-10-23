class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> m;
        vector<vector<string>> v;
        for(auto str : strs)
        {
            string tmp = str;
            sort(tmp.begin(),tmp.end());
            auto it = m.find(tmp);
            if(it != m.end())
            {
                v[(*it).second].push_back(str);
            }
            else
            {
                m[tmp] = v.size();
                v.push_back(vector<string>());
                (*v.rbegin()).push_back(str);
            }
        }
        return v;
    }
};