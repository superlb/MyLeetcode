class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());
        vector<vector<int>> res(people.size());
        for(auto & p : people)
        {
            int count = -1;
            for(int i=0;i<res.size();++i)
            {
                if(res[i].empty() || res[i][0]==p[0]) ++count;
                if(count == p[1])
                {
                    res[i]=p;
                    break;
                }
            }
        }
        return res;
    }
};