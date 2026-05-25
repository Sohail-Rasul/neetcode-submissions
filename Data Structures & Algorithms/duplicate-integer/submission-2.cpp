using namespace std;
#include <map>;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> dictionary;
        for (int i : nums){
            dictionary[i]+=1;
            if(dictionary[i]>1){
                return true;
            }
        }
        return false;

    }
};