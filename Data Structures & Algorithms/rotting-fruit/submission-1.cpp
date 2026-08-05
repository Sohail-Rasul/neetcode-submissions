class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int row = grid.size();
        int col = grid[0].size();
        int minute=0;

        for(int r = 0;r<row;r++){
            for(int c = 0;c<col;c++){
                if(grid[r][c] == 2){
                    rotten.push({r,c});
                }
            }
        }

        int size = rotten.size();

        while(!rotten.empty()){
            if(size==0){
                minute++;
                size = rotten.size();
            }
            bool time = false;
            int qr = rotten.front().first;
            int qc = rotten.front().second;
            rotten.pop();

            if(qc-1 >= 0 && grid[qr][qc-1] == 1 ){
                rotten.push({qr,qc-1});
                grid[qr][qc-1]=2;
            }
            if(qc+1 < col && grid[qr][qc+1]==1 ){
                rotten.push({qr,qc+1});
                grid[qr][qc+1]=2;
            }
            if( qr+1 < row && grid[qr+1][qc]==1){
                rotten.push({qr+1,qc});
                grid[qr+1][qc]=2;
            }
            if(qr-1 >= 0 && grid[qr-1][qc]==1){
                rotten.push({qr-1,qc});
                grid[qr-1][qc]=2;
            }

            size--;
            

        }

        for(int r = 0;r<row;r++){
            for(int c = 0;c<col;c++){
                if(grid[r][c] == 1){
                    return -1;
                }
            }
        }

        return minute;
    }
};