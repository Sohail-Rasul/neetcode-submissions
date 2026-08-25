class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        vector<vector<int>> res;

        for(vector<int> pts : points){
            int dist = (pts[0]*pts[0]) + (pts[1]*pts[1]);
            pq.push({dist,pts});
            if(pq.size()>k){
                pq.pop();
            }
        }

        for(int i =0;i<k;i++){
            vector<int> pts = pq.top().second;
            res.push_back(pts);
            pq.pop();
        }

        return res;
    }
};
