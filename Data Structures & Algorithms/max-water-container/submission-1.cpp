class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=1;
        int min_height;
        int max_area = 0;
        int ctr = 0;
        while(r<heights.size()){

            if(heights[l] == heights[r]) min_height=heights[l];
            else if(heights[l]>heights[r]) min_height = heights[r];
            else min_height = heights[l];



            int area = min_height*(r-l);
            if(area > max_area) max_area = area;

            if(r==heights.size()-1){
                l++;
                r=l;
            }
            r++;
        }

        return max_area;
    }
};
