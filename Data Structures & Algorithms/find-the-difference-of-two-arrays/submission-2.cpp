class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> dist1;
        vector<int> dist2;

        for(int i =0;i<nums1.size() ;i++){
            if(find(dist1.begin(), dist1.end() , nums1[i]) == dist1.end()){
                dist1.push_back(nums1[i]);
            }
        }


        int ctr=0;
        for(int i =0;i<nums2.size();i++){
            if(find(dist2.begin(), dist2.end() , nums2[i]) == dist2.end()){
                dist2.push_back(nums2[i]);
            }
            else{
                ctr++;
            }

            if(find(dist1.begin(), dist1.end() , nums2[i]) != dist1.end()){
                auto it = find(dist1.begin(), dist1.end(), nums2[i]);
                dist1.erase(it);
            }
        }

        for(int i =0;i<nums1.size();i++){
            if(find(dist2.begin(), dist2.end() , nums1[i]) != dist2.end()){
                auto it = find(dist2.begin(), dist2.end(), nums1[i]);
                dist2.erase(it);
            }
        }

        ans.push_back(dist1);
        ans.push_back(dist2);

        return ans;
    }
};