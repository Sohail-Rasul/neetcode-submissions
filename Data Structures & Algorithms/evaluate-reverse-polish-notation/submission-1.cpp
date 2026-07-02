class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i =0;i<tokens.size();i++){
            string s = tokens[i];
            if(s!= "+" && s!= "-" && s!="*" && s!="/"){
                st.push(stoi(s));
            }

            else{
                int res = 0;
                int elem1 = st.top();
                st.pop();
                int elem2 = st.top();
                st.pop();

                if(s=="+") {
                    st.push(elem1+elem2);
                    
                }
                else if (s=="-") {
                    st.push(elem2-elem1);
                    
                }
                else if (s=="*") {
                    st.push(elem1*elem2);
                    
                }

                else {
                    st.push(elem2/elem1);
                    
                }
            }
        }

        return st.top();
    }
};
