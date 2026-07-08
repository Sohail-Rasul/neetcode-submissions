class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l =0;
        int r = matrix[0].size()-1;
        int row = -1;

        for(int i =0;i<matrix.size();i++){
            if(matrix[i][l] <= target && matrix[i][r] >= target){
                row = i;
                break;
            }
        }
        
        if(row == -1) return false;

        while(l<=r){
            int mid = l + (r-l)/2;

            if(matrix[row][mid] < target){
                l = mid+1;
            }
            else if(matrix[row][mid] > target){
                r = mid -1;
            }
            else return true;
        }

        return false;
    }

};
