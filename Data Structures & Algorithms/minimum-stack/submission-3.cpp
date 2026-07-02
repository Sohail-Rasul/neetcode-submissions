class MinStack {
public:
    int minVal = INT_MAX;
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minVal == val) minSt.push(minVal);
        else{
            int old_val = minVal;
            minVal = min(minVal,val);
            if(minVal != old_val) minSt.push(minVal);
        }
    }
    
    void pop() {
        if(st.top() == minSt.top()){
            minSt.pop();
            if(!minSt.empty()) minVal = minSt.top();
            else minVal = INT_MAX;
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minVal;
    }
};
