class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time = 0;
        int fresh = 0;
        queue<vector<int>> q;
        int startRow = 0;
        int startCol = 0;
        
        for(int r = 0;r<grid.size();r++){
            for(int c = 0;c<grid[0].size();c++){
                if(grid[r][c]==2){
                    q.push({r,c});
                }
                else if(grid[r][c]==1){
                    fresh++;
                }
            }
        }
        while(!q.empty()){
            
            int qSize = q.size();
            for(int i =0;i<qSize;i++){
                int r = q.front()[0];
                int c = q.front()[1];
                q.pop();
                

                if(r+1 < grid.size() && grid[r+1][c] == 1){
                    q.push({r+1,c});
                    grid[r+1][c] = 2;
                    fresh--;
                } 
                if(r-1 >= 0 && grid[r-1][c]==1) {
                    q.push({r-1,c});
                    grid[r-1][c] = 2;
                    fresh--;
                }
                if(c+1 < grid[0].size() && grid[r][c+1]==1) {
                    q.push({r,c+1});
                    grid[r][c+1] = 2;
                    fresh--;
                }
                if(c-1 >= 0 && grid[r][c-1]==1) {
                    q.push({r,c-1});
                    grid[r][c-1] = 2;
                    fresh--;
                }
            }

            if(!q.empty()) time++;
        }

        if(fresh) return -1;
        return time;

    }
};
