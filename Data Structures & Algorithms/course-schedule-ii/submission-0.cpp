class Solution {
public:

    unordered_map<int,vector<int>> preReq;
    unordered_set<int> visiting;
    vector<int> res;

    bool dfs(int crs){
        if(visiting.count(crs)!=0){
            return false;
        }

        if(preReq[crs].empty()){
            auto it = find(res.begin(),res.end(),crs);
            if(it == res.end()) res.push_back(crs);
            return true;
        } 

        visiting.insert(crs);
        for(auto& pre : preReq[crs]){
            if(!dfs(pre)) return false;
        }

        visiting.erase(crs);
        preReq[crs].clear();
        res.push_back(crs);
        return true;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        for(int i =0;i<numCourses;i++){
            preReq[i] ={};
        }

        for(auto& pre : prerequisites){
            preReq[pre[0]].push_back(pre[1]);
        }

        for(int i =0;i<numCourses;i++){
            if(!dfs(i)) return {};
        }

        return res;
    }
};