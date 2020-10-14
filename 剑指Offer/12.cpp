class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        vector<vector<char>> v(board);
        for (vector<char> &a : v)
            for (char &b : a)
                b = 0;
        for (int i = 0; i < board.size(); ++i)
        {
            for (int j = 0; j < board[0].size(); ++j)
            {
                if (board[i][j] == word[0])
                {
                    if (solve(board, word, 0, i, j, v))
                        return true;
                }
            }
        }
        return false;
    }
    bool solve(vector<vector<char>> &board, string word, int len, int a, int b, vector<vector<char>> &status)
    {
        if (len == word.size())
            return true;
        if (a >= board.size() || b >= board[0].size() || status[a][b] == 1)
            return false;
        if (board[a][b] == word[len])
        {
            status[a][b] = 1;
            bool is = solve(board, word, len + 1, a + 1, b, status) ||
                      solve(board, word, len + 1, a - 1, b, status) ||
                      solve(board, word, len + 1, a, b + 1, status) ||
                      solve(board, word, len + 1, a, b - 1, status);
            status[a][b] = 0;
            return is;
        }
        else
            return false;
    }
};