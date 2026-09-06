class Solution {
public:

    unordered_map<int,vector<int>> prereq;
    unordered_set<int> visiting;

    bool dfs(int crs){
        if(visiting.count(crs)) return false;
        if(prereq[crs].size()==0) return true;

        visiting.insert(crs);

        for(int pre : prereq[crs]){
            if(!dfs(pre)){
                return false;
            }
        }

        visiting.erase(crs);
        prereq[crs].clear();

        return true;
    }


    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        for(int i = 0;i<numCourses;i++){
            prereq[i] = {};
        }
        
        for(auto& pre : prerequisites){
            prereq[pre[0]].push_back(pre[1]);
        }

        for(int i = 0;i<numCourses;i++){
            if(!dfs(i)) return false;
        }

        return true;
    }
};
