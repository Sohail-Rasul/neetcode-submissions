class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxK=0;
        for(int i =0;i<piles.size();i++) {
            maxK = max(maxK,piles[i]);
        }

        
        int l =1;
        int r = maxK;

        while(l<r){
            int mid = l + (r-l)/2;

            int sum =0;
            for(int n : piles){
                sum += (n+mid-1)/mid;
            }

            if(sum <= h){
                r= mid;
            }
            else{
                l = mid+1;
            }
        }

        return l;

    }
};
