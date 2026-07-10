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
        int max = 0;
        string maxString ="";
        for( auto pair : keyVal[key]){
            if (pair.second == timestamp) return pair.first;
            else if (pair.second > max && pair.second < timestamp) {
                max = pair.second;
                maxString = pair.first;
            }
        }
        return maxString;
    }
    
};
