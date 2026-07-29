class KthLargest {
    priority_queue<int, vector<int> , greater<int> > pq;
    int kVal=0;
public:
    
    KthLargest(int k, vector<int>& nums) {
        kVal = k;
        for(int n : nums){
            pq.push(n);
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>kVal) pq.pop();

        return pq.top();
    }
};