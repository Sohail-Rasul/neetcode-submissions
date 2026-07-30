class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<pair<double, vector<int>>> pq;

        for(const auto& val : points){
            double xVal = val[0] * val[0];
            double yVal = val[1] * val[1];
            double dist = (xVal+yVal); // Same as sqr root, greater will be greater, smaller will be smaller

            pq.push({dist,val});
            if(pq.size()>k) {
                pq.pop();
            }
        }

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;

    }
};