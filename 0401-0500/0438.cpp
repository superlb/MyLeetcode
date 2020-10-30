class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size()) return vector<int>();
        vector<int> v(26,0);
        vector<int> res;
        for(int i=0;i<p.size();++i)
            --v[p[i]-'a'];
        for(int i=0;i<p.size();++i)
            ++v[s[i]-'a'];
        bool is = true;
        for(auto a:v)
            if(a!=0)
                is = false;
        if(is)
            res.push_back(0);
        int l=0,r=p.size();
        while(r<s.size())
        {
            ++v[s[r++]-'a'];
            --v[s[l++]-'a'];
            is = true;
            for(auto a:v)
                if(a!=0)
                    is = false;
            if(is)
                res.push_back(l);
        }
        return res;
    }
};