class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> v1, v2;
        int len1 = matrix.size(), len2;
        if (len1 == 0)
            return;
        else
        {
            len2 = matrix[0].size();
        }
        for (int i = 0; i < len1; ++i)
        {
            for (int j = 0; j < len2; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        for (auto a : v1)
        {
            for (int i = 0; i < len2; ++i)
            {
                matrix[a][i] = 0;
            }
        }
        for (auto a : v2)
        {
            for (int i = 0; i < len1; ++i)
            {
                matrix[i][a] = 0;
            }
        }
    }
};