class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        vector<int> ans;
        for(int n : nums){
            dict[n]++;
        }


        for( int i = 0;i<k;i++){
            int max = 0;
            int max_val =0;
            for(int n : nums){
                if(dict[n]>max_val){
                    max = n;
                    max_val = dict[n];
                }
            }
            dict[max] = -1;
            ans.push_back(max);
        }

        return ans;        
    }
};
