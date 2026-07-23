class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        int size = nums.size();
        int ctr = 1;
        int res = 1;

        if(size==0) return 0;

        for(int i =0;i<size;i++){
            numSet.insert(nums[i]);
        }
        int currNum = nums[0];
        int currIdx = 0;
        while(currIdx<size){
            
            int nextNum = currNum+1;
            // cout<< "Current Number: " << currNum <<'\n';

            if(numSet.find(nextNum) != numSet.end()){
                // cout << "Found NextNum: " << nextNum <<"\n";
                ctr++;
                res = max(ctr,res);
                currNum = nextNum;
            }
            else{
                currIdx++;
                if(currIdx<size) currNum = nums[currIdx];
                ctr=1;
            }
        }

        return res;
    }
};
