class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int row = grid.size();
        int col = grid[0].size();
        int minute=0;
        int fresh = 0;

        for(int r = 0;r<row;r++){
            for(int c = 0;c<col;c++){
                if(grid[r][c] == 2){
                    rotten.push({r,c});
                }
                else if(grid[r][c]==1){
                    fresh++;
                }
            }
        }
        while(!rotten.empty()){
            int size = rotten.size(); 

            for(int i =0;i<size;i++){
                int qr = rotten.front().first;
                int qc = rotten.front().second;
                rotten.pop();

                if(qc-1 >= 0 && grid[qr][qc-1] == 1 ){
                    rotten.push({qr,qc-1});
                    grid[qr][qc-1]=2;
                    fresh--;
                }
                if(qc+1 < col && grid[qr][qc+1]==1 ){
                    rotten.push({qr,qc+1});
                    grid[qr][qc+1]=2;
                    fresh--;
                }
                if( qr+1 < row && grid[qr+1][qc]==1){
                    rotten.push({qr+1,qc});
                    grid[qr+1][qc]=2;
                    fresh--;
                }
                if(qr-1 >= 0 && grid[qr-1][qc]==1){
                    rotten.push({qr-1,qc});
                    grid[qr-1][qc]=2;
                    fresh--;
                }
            }
            if(!rotten.empty()) minute++;

        }

        if(fresh) return -1;

        return minute;
    }
};