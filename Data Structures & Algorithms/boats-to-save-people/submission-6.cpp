class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l =0;
        int r = people.size()-1;
        int count =0;
        int sum =0;
        while(r >=0 && people[r]==limit){
            count++;
            r--;
        }
        if(r<0){
            return count;
        }
        while(l<=r){
            if(l==r){
                count++;
                break;
            }
            sum = people[l] + people[r];
            if(sum > limit){
                int current = r;
                count++;
                sum=0;
                r--;
                while(r>=0 && people[r]==people[current]){
                    count++;
                    r--;
                }
            }
            else if(sum < limit){
                count++;
                sum=0;
                l++;
                r--;
            }
            else{
                count++;
                sum=0;
                l++;
                r--;
            }
        }
        return count;
    }
};