class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
        unordered_map<int,int>freq ;
        vector<int> res;
        
        for(auto n : nums){
            freq[n]++;
        }

        for(auto pair : freq){
            pq.push({pair.second,pair.first});
            cout <<"Top Element: " <<pq.top().second <<"\n";
            if(pq.size()>k) pq.pop();
        }

        for(int i =0;i<k;i++){
            int num = pq.top().second;
            pq.pop();
            res.push_back(num);
        }

        return res;
    }
};
