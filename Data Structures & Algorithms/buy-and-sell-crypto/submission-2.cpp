class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = 0;
        int sell = 1;
        int max_profit = 0;
        while(sell<prices.size()){
            int profit = prices[sell] - prices[lowest];
            if(profit>max_profit){
                max_profit = profit;
            }
            if(prices[sell]<prices[lowest]){
                lowest = sell;
            }

            sell++;
        }

        return max_profit;
    }
};
