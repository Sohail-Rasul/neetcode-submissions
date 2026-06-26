class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int l =0;
        int res = 0;
        int first_elem;
        int maxRes=0;
        for ( int r =0; r<fruits.size(); r++){
            count[fruits[r]]++;
            
            while(count.size() >2){
                first_elem = fruits[l];
                if(count[first_elem] ==1){
                    count.erase(first_elem);
                }else{
                    count[first_elem]--;
                }
                l++;
                maxRes = max(res,maxRes);
            }

            res= r-l+1;
        }

        maxRes = max(res,maxRes);

        return maxRes;
    }
};