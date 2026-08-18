class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       unordered_map<int, unordered_set<int>> trusts;
       unordered_map<int, unordered_set<int>> trustedBy;

       for(vector<int> arr : trust){
        trusts[arr[0]].insert(arr[1]);
        trustedBy[arr[1]].insert(arr[0]);
       }

       for(int j = 1;j<=n;j++){
        if(trusts[j].empty()){
            bool judge = true;
            for(int i =1;i<=n;i++){
                if(i!=j && !trustedBy[j].count(i)) judge = false;
            }
            if(judge) return j;
        }
        
       }
        return -1;

    }
};