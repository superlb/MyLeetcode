class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        if(postorder.size()<2) return true;
        return solve(postorder,0,postorder.size()-1);
    }
    bool solve(vector<int> &v,int left,int right)
    {
        if(left>=right) return true;
        int root = v[right];
        int i = left;
        while(i<right&&v[i]<root) ++i;
        for(int j=i;j<right;++j)
        {
            if(v[j]<=root) return false;
        }
        return solve(v,left,i-1)&&solve(v,i,right-1);
    }
};