class Solution {
public:
    void dfs(vector<vector<int>>& image,int r,int c,int og,int color){
        //Base Case:
        if(r<0 || c<0 || r>=image.size() || c>= image[0].size()) return;

        if(image[r][c] != og) return;


        image[r][c] = color;

        dfs(image,r,c+1,og,color);
        dfs(image,r,c-1,og,color);
        dfs(image,r+1,c,og,color);
        dfs(image,r-1,c,og,color);

        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ogColor = image[sr][sc];
        if(ogColor == color) return image;

        dfs(image,sr,sc,ogColor,color);

        return image;
    }
};