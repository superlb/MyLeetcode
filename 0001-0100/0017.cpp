class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return vector<string>();
        deque<string> v;
        v.push_back("");
        for(int i=0;i<digits.size();++i)
        {
            int len = v.size();
            while(len--)
            {
                string str = v.front();
                v.pop_front();
                if(digits[i]=='7')
                {
                    v.push_back(str + "p");
                    v.push_back(str + "q");
                    v.push_back(str + "r");
                    v.push_back(str + "s");
                }
                else if(digits[i]=='8')
                {
                    v.push_back(str + "t");
                    v.push_back(str + "u");
                    v.push_back(str + "v");
                }
                else if(digits[i]=='9')
                {
                    v.push_back(str + "w");
                    v.push_back(str + "x");
                    v.push_back(str + "y");
                    v.push_back(str + "z");
                }
                else
                {
                    v.push_back(str + string(1,'a' + (digits[i] - '2')*3 ) );
                    v.push_back(str + string(1,'a' + (digits[i] - '2')*3 + 1) );
                    v.push_back(str + string(1,'a' + (digits[i] - '2')*3 + 2) );
                }
            }
        }
        vector<string> res;
        while(!v.empty())
        {
            res.emplace_back(v.front());
            v.pop_front();
        }
        return res;
    }
};