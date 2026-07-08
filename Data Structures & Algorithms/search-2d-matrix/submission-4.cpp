class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l =0;
        int r =matrix[0].size()-1;
        int row = 0;
        int first = 0;
        int last = matrix[0].size()-1;

        while(l<=r){
            if(matrix[row].size()==1){
                if(matrix[row][last] == target){
                    return true;
                }
                else if(matrix[row][last] < target && row<matrix.size()-1){
                    row++;
                }
                else if(matrix[row][last] > target && row< matrix.size()-1){
                    row++;
                }
                else{
                    return false;
                }
            }
            else if(matrix[row][last] <target && row < matrix.size()-1){
                cout << "Row Highest lower than Target: " << matrix[row][r] << "\n";
                row++;
            }
            else if( matrix[row][first] > target){
                 cout << "Row lowest higher than Target: " << matrix[row][l] << "\n";
                return false;
            }
            else{
                int mid = l + (r-l)/2;
                
                if(matrix[row][mid] < target) {
                    cout << "Middle Value lower than target: "<< matrix[row][mid] <<"\n";
                    l = mid+1;
                }
                else if (matrix[row][mid] > target) {
                    cout << "Middle Value higher than target: "<< matrix[row][mid] <<"\n";
                    r = mid-1;
                }
                else return true;
            }
        }

        return false;
    }
};
