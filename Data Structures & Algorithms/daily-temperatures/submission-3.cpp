class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st_ct;
        vector<int> res(temperatures.size());

        for(int i = temperatures.size()-1;i>=0;i--){
            while(!st_ct.empty() && temperatures[st_ct.top()] <= temperatures[i]){
                st_ct.pop();
            }

            if(st_ct.empty()){
                res[i] = 0;
                st_ct.push(i);
                continue;
            }

            else{
                res[i]=(st_ct.top() - i);
                st_ct.push(i);
                continue;
            }
        }

        return res;
    }
};
