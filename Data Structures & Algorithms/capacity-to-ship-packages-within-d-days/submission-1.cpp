class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int totalWeight = 0;
        int maxWeight = 0;

        for(int n : weights){
            totalWeight +=n;
            maxWeight = max(maxWeight,n);
        }

        int l = maxWeight;
        int r = totalWeight;

        while(l<r){
            int mid = l + (r-l)/2;
            int current = 0;
            int count = 0;

            while(current < weights.size()){
                int leftoverWeight = mid;
                while(current < weights.size() && weights[current] <= leftoverWeight){
                    leftoverWeight -= weights[current];
                    current++;
                }
                count++;
            }

            if(count <= days){
                r=mid;
            }
            else{
                l = mid+1;
            }
        }

        return l;
    }
};