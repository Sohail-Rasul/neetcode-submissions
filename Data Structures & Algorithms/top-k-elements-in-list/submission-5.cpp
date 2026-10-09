class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > pq;
        unordered_map<int,int> freq;
        vector<int> res;

        for(int n : nums){
            freq[n]++;
        }

        for(auto& pair : freq){
            pq.push({pair.second,pair.first});
            if(pq.size()>k) pq.pop();
        }

        for(int i =0;i<k;i++){
            int num = pq.top().second;
            res.push_back(num);
            pq.pop();
        }

        return res;

    }
};
