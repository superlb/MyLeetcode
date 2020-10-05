class Solution
{
public:
    string compressString(string S)
    {
        if (S.size() == 0)
            return S;
        char last = S[0];
        int count = 0;
        string str = S.substr(0, 1);
        for (int i = 0; i < S.size(); ++i)
        {
            if (S[i] == last)
            {
                ++count;
            }
            else
            {
                str.append(to_string(count));
                str.append(1, S[i]);
                last = S[i];
                count = 1;
            }
        }
        str.append(to_string(count));
        return str.size() < S.size() ? str : S;
    }
};