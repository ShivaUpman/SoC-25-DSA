class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0;
        int right = m*n - 1 ;

        while (left <= right ){
            int mid = (right + left)/2;
            int val = matrix[mid / n][mid % n];

            if (target == val) return true;
            else if (target < val) right = mid-1;
            else left = mid + 1; 
        }

        return false ;
    }
};