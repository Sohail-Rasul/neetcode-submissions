class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        vector<pair<int,int>> arr;


        for (int n : nums){
            dict[n]++;
        }

        for(auto pair : dict){
            arr.push_back({pair.second,pair.first});
        }

        sort(arr.rbegin(),arr.rend());

        vector<int> ans;
        for(int i = 0; i<k;i++){
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
