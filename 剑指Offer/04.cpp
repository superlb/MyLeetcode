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

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) return false;
        int i=0, j=matrix[0].size() - 1;
        while(i < matrix.size() && j >=0) {
            if (matrix[i][j] == target) {
                return true;
            } else if (matrix[i][j] < target) {
                ++i;
            } else if (matrix[i][j] > target) {
                --j;
            }
        }
        return false;
    }
};