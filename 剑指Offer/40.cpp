class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        priority_queue<int> q;
        vector<int> v;
        if(k==0) return v;
        for(auto a:arr)
        {
            if(q.size()==k)
            {
                if(a<q.top())
                {
                    q.pop();
                    q.push(a);
                }
            }
            else
            {
                q.push(a);
            }
        }
        while(!q.empty())
        {
            v.push_back(q.top());
            q.pop();
        }
        return v;
    }
};