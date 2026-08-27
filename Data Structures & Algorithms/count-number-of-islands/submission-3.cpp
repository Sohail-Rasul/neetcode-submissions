class Solution {
public:

    void dfs(vector<vector<char>>& grid, int row, int col){
        if(row<0 || col< 0 || row >= grid.size() || col >= grid[0].size()) return;

        if(grid[row][col]=='0') {
            return;
        }

        // "Sink" current land
        grid[row][col]='0';

        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);

        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int res = 0;

        for(int r =0;r<row;r++){
            for(int c = 0;c<col;c++){
                if(grid[r][c]=='1'){
                    dfs(grid,r,c);
                    res++;
                }
            }
        }

        return res;
    }
};
