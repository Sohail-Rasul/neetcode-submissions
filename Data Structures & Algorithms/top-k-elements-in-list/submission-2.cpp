class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        vector<int> ans;
        vector<vector<int>> sorting;

        for(int n :nums){
            dict[n]++;
        }

        for(auto pair : dict){
            sorting.push_back({pair.second,pair.first});
        }

        sort(sorting.rbegin(),sorting.rend());

        for(int i = 0; i<k; i++){
            ans.push_back(sorting[i][1]);
        }
        return ans;
    }
};
