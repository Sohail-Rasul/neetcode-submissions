class Solution {
public:

    void dfs(vector<vector<char>>& graph, int r, int c){
        
        if(r<0 || c<0 || r>= graph.size() || c>= graph[0].size() ) return;

        if(graph[r][c]=='0') return;

        graph[r][c] = '0';

        dfs(graph,r+1,c);
        dfs(graph,r-1,c);
        dfs(graph,r,c+1);
        dfs(graph,r,c-1);

        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int res = 0;

        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i,j);
                    res++;
                }
            }
        }

        return res;
    }
};
