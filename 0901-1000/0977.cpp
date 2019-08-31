/*
Date: 2019年8月31日13:28:46
Time: 172ms
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> v;
        for(vector<int>::iterator it=A.begin();it!=A.end();++it)
        {
            v.push_back((*it)*(*it));
        }
        sort(v.begin(),v.end());
        return v;
    }
};
