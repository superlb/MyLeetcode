class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> v;
        if (matrix.empty())
            return v;
        int left = 0, right = matrix[0].size() - 1;
        int up = 0, down = matrix.size() - 1;
        while (1)
        {
            for (int i = left; i <= right; ++i)
                v.push_back(matrix[up][i]);
            if (++up > down)
                break;
            for (int i = up; i <= down; ++i)
                v.push_back(matrix[i][right]);
            if (--right < left)
                break;
            for (int i = right; i >= left; --i)
                v.push_back(matrix[down][i]);
            if (--down < up)
                break;
            for (int i = down; i >= up; --i)
                v.push_back(matrix[i][left]);
            if (++left > right)
                break;
        }
        return v;
    }
};