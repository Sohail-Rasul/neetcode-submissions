class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<pair<double, vector<int>>> pq;

        for(const auto& val : points){
            double xVal = pow(abs(val[0]),2);
            double yVal = pow(abs(val[1]),2);
            double dist = pow(xVal+yVal,0.5);

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