class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int n : stones){
            pq.push(n);
        }

        while(pq.size()>1){
            int top = pq.top();
            pq.pop();
            int second = pq.top();

            if(top == second){
                pq.pop();
            }
            else{
                pq.pop();
                pq.push(top-second);
            }

            
        }
        if(pq.size()) return pq.top();
        else return 0;
    }
};