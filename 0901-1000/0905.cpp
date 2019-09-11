/*
Date:2019年9月9日14:33:42
Time:52ms
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> a;
        for(int i = 0;i<A.size();++i)
            if(A[i]%2 == 0)
                a.push_back(A[i]);
        for(int i = 0;i<A.size();++i)
            if(A[i]%2)
                a.push_back(A[i]);
        return a;
    }
};
