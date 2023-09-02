class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int s=0;
        int n=matrix[0].size();
        int e=matrix.size()*n-1;
        int mid=s+(e-s)/2;
        
        while(s<=e)
        {
            int rowindex=mid/n;
            int colindex=mid%n;
            
            if(matrix[rowindex][colindex]==target)
            {
                return true;
            }
            if(matrix[rowindex][colindex]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};