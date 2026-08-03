class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        vector<int> ans(r+1);
        int max = 0;
        while(l<arr.size()){
            if(l==r){
                ans[l]=-1;
                break;
            }
            if(arr[r] > ans[l]){
                ans[l] = arr[r];
                r--;
                if(r==l){
                    r=arr.size()-1;
                    l++;
                }
                continue;
            }
            else{
                r--;
                if(r==l){
                    r=arr.size()-1;
                    l++;
                }
                continue;
            }
        }

        return ans;
    }
};