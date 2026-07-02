class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> res(nums1.size(),-1);
        unordered_map<int,int> idx;

        for(int i = 0;i<nums1.size();i++){
            idx[nums1[i]] =i;
        }

        for(int i =0;i<nums2.size();i++){
            if(st.empty()){
                st.push(nums2[i]);
                continue;
            }

            while(!st.empty() && nums2[i] > st.top()){
                if(idx.find(st.top()) != idx.end()){
                    res[idx[st.top()]] = nums2[i];
                }
                st.pop();
            }

            st.push(nums2[i]);
        }

        return res;
    }
};