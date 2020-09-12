class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==1 || arr.size()==2)
            return true;
        vector<int> v(arr);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-2;++i)
        {
            if(v[i]-v[i+1]!=v[i+1]-v[i+2])
                return false;
        }
        return true;
    }
};