class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> v(image);
        dfs(v,sr,sc,v[sr][sc],newColor);
        return v;
    }
    void dfs(vector<vector<int>> &v,int x,int y,int oldc,int newc)
    {
        if(x<0||y<0||x>=v.size()||y>=v[0].size()||v[x][y]==newc||v[x][y]!=oldc) return;
        v[x][y] = newc;
        dfs(v,x-1,y,oldc,newc);
        dfs(v,x+1,y,oldc,newc);
        dfs(v,x,y-1,oldc,newc);
        dfs(v,x,y+1,oldc,newc);
    }
};