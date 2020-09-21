class Solution {
private:
struct line
{
    int u,v;
    line(int _u,int _v) : u(_u),v(_v) {};
    bool operator < (const line &a) const
	{
		if (u <= a.v && a.v <= v)
			return false;
		if (u <= a.u && a.u <= v)
			return false;
		if (a.u <= u && u <= a.v)
			return false;
		if (a.u <= v && v <= a.v)
			return false;
		return v < a.v;
	}
};
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        set<line> s;
        set<line>::iterator it;
        for(vector<int> tmp : intervals)
        {
            line l(tmp[0],tmp[1]);
            it=s.find(l);
            while(it!=s.end())
            {
                l.u = min((*it).u,l.u);
                l.v = max((*it).v,l.v);
                s.erase(it);
                it=s.find(l);
            }
            s.insert(l);
        }
        for(it=s.begin();it!=s.end();++it)
        {
            vector<int> tmp;
            tmp.push_back((*it).u);
            tmp.push_back((*it).v);
            v.push_back(tmp);
        }
        return v;
    }

};