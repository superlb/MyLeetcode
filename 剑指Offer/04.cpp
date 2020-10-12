class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m = matrix.size(),n = matrix[0].size();
        int i = 0,j = n - 1;
        while(i<m && j>=0)
        {
           if(matrix[i][j]>target)
           {
               --j;
           } 
           else if(matrix[i][j]<target)
           {
               ++i;
           }
           else
           {
               return true;
           }
        }
        return false;
    }
};