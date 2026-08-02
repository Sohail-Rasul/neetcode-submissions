class Solution {
public:

    int dfs(vector<vector<int>>& grid,int r,int c){
        // Invalid Case
        if(r<0 || c<0 || r>= grid.size() || c>= grid[0].size()) return 0;

        // Base Case
        if(grid[r][c]==0) return 0;

        grid[r][c] = 0;

        int right = dfs(grid,r,c+1);
        int left = dfs(grid,r,c-1);
        int up = dfs(grid,r-1,c);
        int down = dfs(grid,r+1,c);

        
        return 1+left+right+up+down;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;

        for(int r =0; r<rows; r++){
            for(int c = 0;c<cols;c++){
                if(grid[r][c]==1){
                    int area = dfs(grid,r,c);
                    maxArea=max(area,maxArea);
                }
            }
        }
        
        return maxArea;
    }
};