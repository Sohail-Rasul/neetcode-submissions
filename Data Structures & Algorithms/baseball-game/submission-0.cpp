class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i =0;i<operations.size();i++){
            if(operations[i]=="+"){
                stack<int> temp(st);
                int elem1 = temp.top();
                temp.pop();
                int elem2 = temp.top();
                
                st.push(elem1+elem2);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int elem1 = st.top();
                st.push(2*elem1);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        int sum =0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

        return sum;
    }

};