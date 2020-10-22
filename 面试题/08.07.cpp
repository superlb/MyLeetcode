class Solution {
public:
    vector<string> permutation(string S) {
        vector<string> v;
        sort(S.begin(),S.end());
        v.push_back(S);
        while(next_permutation(S.begin(),S.end()))
        {
            v.push_back(S);
        }
        return v;
    }
};