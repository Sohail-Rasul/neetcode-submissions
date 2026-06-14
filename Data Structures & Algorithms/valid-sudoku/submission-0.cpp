class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /*
            ROW 
        Must contain digits 1-9 no duplicates
        */
         // For each row
        for(int i = 0; i <9;i++){
            unordered_map<char,int> row_val;
            for(int j=0;j<9;j++){
                if(isdigit(board[i][j])){
                    row_val[board[i][j]]++;
                    if(row_val[board[i][j]] > 1){
                        return false;
                    }
                }
            }
        }

         // For each column
        for(int i = 0; i <9;i++){
            unordered_map<char,int> col_val;
            for(int j=0;j<9;j++){
                if(isdigit(board[j][i])){
                    col_val[board[j][i]]++;
                    if(col_val[board[j][i]] > 1){
                        return false;
                    }
                }
            }
        }

        // For 3x3 we need to check uniqueness
        for(int i =0;i<3;i++){
            // First row of 3x3
            unordered_map<char,int> box_check1;
            for(int j = 0; j<3;j++){ //row
                for(int k = (3*i);k<(3+3*i);k++){//column
                    if(isdigit(board[j][k])){
                        box_check1[board[j][k]]++;
                        if(box_check1[board[j][k]] > 1){
                            return false;
                        }
                    }
                }
            }

            // Second row of boxes
            unordered_map<char,int> box_check2;
            for(int j = 0; j<3;j++){ //row
                for(int k = (3*i);k<(3+3*i);k++){//column
                    if(isdigit(board[j][k])){
                        box_check2[board[j][k]]++;
                        if(box_check2[board[j][k]] > 1){
                            return false;
                        }
                    }
                }
            }
            
            // Third row of boxes
            unordered_map<char,int> box_check3;
            for(int j = 0; j<3;j++){ //row
                for(int k = (3*i);k<(3+3*i);k++){//column
                    if(isdigit(board[j][k])){
                        box_check3[board[j][k]]++;
                        if(box_check3[board[j][k]] > 1){
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
