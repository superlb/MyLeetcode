class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        int len = A.size();
        move(A,B,C,len);
    }
    void move(vector<int>& A, vector<int>& B, vector<int>& C,int n)
    {
        if(n==1)
        {
            C.push_back(*A.rbegin());
            A.pop_back();
        }
        else
        {
            move(A,C,B,n-1);
            C.push_back(*A.rbegin());
            A.pop_back();
            move(B,A,C,n-1);
        }
    }
};