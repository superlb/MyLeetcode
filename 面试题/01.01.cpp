class Solution {
public:
    bool isUnique(string astr) {
        vector<int> v(128,0);
        for(auto i : astr)
        {
            ++v[i];
            if(v[i]>1)  return false;
        }
        return true;
    }
};