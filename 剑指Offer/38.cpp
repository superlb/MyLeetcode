class Solution {
public:
    vector<string> permutation(string s) {
        vector<string> v;
        sort(s.begin(),s.end());
        v.emplace_back(s);
        while(next_permutation(s.begin(),s.end()))
            v.emplace_back(s);
        return v;
    }
};