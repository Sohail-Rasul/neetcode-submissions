class Solution {
public:

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq; // dist,num
        vector<int> res;

        for(int i =0;i< arr.size();i++){
            int dist = abs(arr[i] - x);
            pq.push({dist,arr[i]});
            if(pq.size() > k) pq.pop();
        }

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        sort(res.begin(),res.end());
        return res;


    }
};