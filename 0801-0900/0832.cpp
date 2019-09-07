/*
Date:2019年9月7日23:47:31
Time:24ms
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int alen = A.size();
        vector<vector<int>> a(alen);
        int blen = A[0].size();
        for(int i = 0;i < alen;++i)
        {
            vector<int> b = A[i];
            for(int j = 0;j<blen;++j)
            {
                a[i].push_back(b[blen-j-1]);
            }
        }
        for(int i = 0;i < alen;++i)
        {
            for(int j = 0;j<blen;++j)
            {
                a[i][j] = !a[i][j];
            }
        }
        return a;
    }
};
