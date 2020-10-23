class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int k = 0;
        for(auto a : pushed)
        {
            s.push(a);
            while(!s.empty()&&s.top()==popped[k])
            {
                s.pop();
                ++k;
            }
        }
        return s.empty();
    }
};