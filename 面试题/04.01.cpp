class Solution {
public:
    vector<vector<int>> edge;
    vector<int> visit;
    bool findWhetherExistsPath(int n, vector<vector<int>>& graph, int start, int target) {
        edge.resize(n);
        visit.resize(n,0);
        for(auto &a:graph)
        {
            edge[a[0]].push_back(a[1]);
        }
        dfs(start);
        return visit[target];
    }
    void dfs(int pos)
    {
        visit[pos] = 1;
        for(auto a:edge[pos])
        {
            if(visit[a]==0)
                dfs(a);
        }
    }
};