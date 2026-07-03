class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int time = 0;
        //initialize queue
        for(int i =0;i<tickets.size();i++){
            q.push({tickets[i],i});
        }
        bool condn = true;
        while(condn){
            if(q.front().second == k && (q.front().first-1) == 0){
                time++;
                return time;
            }
            else{
                pair<int,int> elem = q.front();
                elem.first--;
                q.pop();
                if(elem.first!=0) q.push({elem.first,elem.second});
                time++;
            }
        }
    }
};