class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st_main;
        stack<int> st_ct;
        vector<int> res;
        int i = temperatures.size()-1;

        for(int i =temperatures.size()-1;i>=0;i--){
            st_main.push(i);
        }

        while(!st_main.empty()){
            if(st_ct.empty()){
                res.push_back(0);
                st_ct.push(i);
                st_main.pop();
                i--;
                continue;
            }
            else if(temperatures[st_ct.top()] <= temperatures[i]){
                st_ct.pop();
                if(st_ct.empty()){
                    res.push_back(0);
                    st_ct.push(i);
                    st_main.pop();
                    i--;
                    continue;
                }
                continue;
            }
            else{
                res.push_back(st_ct.top() - i);
                st_ct.push(i);
                st_main.pop();
                i--;
                continue;
            }
        }

        reverse(res.begin(),res.end());

        return res;
    }
};
