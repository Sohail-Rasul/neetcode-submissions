class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       vector<int> copy = arr;
        arr[arr.size()-1]=-1;
        int max =0;
       for(int i =arr.size()-2; i>=0;i--){
            if(copy[i+1]>max){
                max = copy[i+1];
            }
            arr[i] = max;
       }

       return arr; 
    }
};