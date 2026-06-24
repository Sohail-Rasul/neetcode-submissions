class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0;
        int r = prices.size()-1;
        int max_profit=0;
        while(l<r){
            int profit = prices[r]-prices[l];
            if(profit>max_profit){
                max_profit = profit;
            }
            if(r==l+1){
                r=prices.size()-1;
                l++;
                continue;
            }
            else{
                r--;
                continue;
            }
            
        }

        return max_profit;
    }
};
