class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        vector<vector<int>> res;

        for(vector<int> pts : points){
            int dist = pow(pts[0],2) + pow(pts[1],2);
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
