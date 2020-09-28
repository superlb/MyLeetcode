class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> v(128,0);
        for(auto i:s)
            ++v[i];
        int count = 0;
        for(auto i:v)
            if(i%2)++count;
        return count<=1;
    }
};