class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;

        map<int,int> freq;
        for(int n : hand){
            freq[n]++;
        }

        while(!freq.empty()){
            int start = freq.begin()->first;

            for(int i =0;i<groupSize;i++){
                int next = start + i;

                if(freq.find(next) == freq.end()){
                    return false;
                }

                freq[next]--;

                if(freq[next]==0){
                    freq.erase(next);
                }
            }
        }

        return true;
    }
};
