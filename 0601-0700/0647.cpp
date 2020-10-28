class Solution {
public:
    int countSubstrings(string s) {
        string str="$#";
        for(auto a:s)
        {
            str += a;
            str += '#';
        }
        str += '!';
        int len = str.size();
        vector<int> v(len,0);
        int mx=0,id=0,ans=0;
        for(int i=1;i<len-2;++i)
        {
            v[i]=mx>i?min(v[2*id-i],mx-i):1;
            while(str[i+v[i]]==str[i-v[i]])++v[i];
            if(i+v[i]>mx)
            {
                mx=i+v[i];
                id=i;
            }
            ans += v[i]/2;
        }
        return ans;
    }
};