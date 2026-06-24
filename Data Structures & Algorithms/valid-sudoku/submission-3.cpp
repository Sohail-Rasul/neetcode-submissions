class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // Create a new hashset for each row and check existence
        bool isValid = true;
        for(vector<char> row : board){
            unordered_set<char> dict;
            for(char c : row){
                if(c=='.'){
                    continue;
                }
                else{
                    if(dict.find(c) != dict.end()) return false;
                    else{
                        dict.insert(c);
                    }
                }

            }
        }

        cout <<" Rows Valid \n";

        // Same for each column. GO through each row and check only the first/second/.... element
        for(int i =0;i<9;i++){
            unordered_set<char> dict;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                else{
                    if(dict.find(board[j][i]) != dict.end()) return false;
                    else{
                        dict.insert(board[j][i]);
                    }
                }

            }
        }

        cout << "Columns Valid \n";

        map<pair<int,int>, unordered_set<char>> square_check;
        // Checking each 3x3 Box
        for(int r =0;r<9;r++){ // Each row
            for(int c=0;c<9;c++){ //Each Column
                pair<int,int> squareKey = {r/3,c/3};
                if(board[r][c]=='.') continue;
                else if(square_check[squareKey].find(board[r][c]) ==  square_check[squareKey].end() ){
                    square_check[squareKey].insert(board[r][c]);
                }
                
                else{
                    return false;
                }
            }
        }


        return isValid;
    }
};
