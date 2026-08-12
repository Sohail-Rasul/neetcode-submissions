class Solution {
public:

    unordered_map<int,vector<int>> preReq;
    unordered_set<int> visiting;
    unordered_map<int,int> state; // 0 => unvisited, 1=> visiting, 2=> processed
    vector<int> res;

    bool dfs(int crs){
        
        if(state[crs]==1) return false;

        if(state[crs]==2) return true;

        state[crs] = 1;
        for(auto& pre : preReq[crs]){
            if(!dfs(pre)) return false;
        }

        state[crs] = 2;
        res.push_back(crs);
        return true;

    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        for(int i =0;i<numCourses;i++){
            preReq[i] ={};
            state[i] = 0; 
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