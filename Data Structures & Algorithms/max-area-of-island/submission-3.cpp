class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c){
        if(r<0 || c<0 || r >= grid.size() || c>= grid[0].size()) return 0;

        if(grid[r][c]==0) return 0;

        grid[r][c]=0;

        int up = dfs(grid,r+1,c);
        int down = dfs(grid,r-1,c);
        int left = dfs(grid,r,c+1);
        int right = dfs(grid,r,c-1);

        return 1 + up+down+left+right;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int area = dfs(grid,i,j);
                    res = max(area,res);
                }
            }
        }

        return res;
    }
};
