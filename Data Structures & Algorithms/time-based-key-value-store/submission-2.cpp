class TimeMap {

vector<pair<string,int>> arr;
unordered_map<string,vector<pair<string,int>>> keyVal;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keyVal[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        vector<pair<string , int> > arr = keyVal[key];
        int left = 0;
        int right = arr.size()-1;
        string res = "";

        while(left <= right){
            int mid = left + (right-left)/2;

            if(arr[mid].second <= timestamp){
                res = arr[mid].first;
                left = mid +1;
            }
            else if (arr[mid].second > timestamp){
                right = mid-1;
            }
            else{
                return arr[mid].first;
            }
        }
        return res;
    }
    
};
