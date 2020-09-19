class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<int, int> mp;
        int count = 0;
        
        for(int i = 0; i < (int)arr.size(); i++){
            if(i == 0) count++;
            else if(i == (int)arr.size()-1){
                if(arr[i] == arr[i-1]){
                    count++;
                    if(mp[count]) return false;
                }else{
                    if(mp[count]) return false;
                    mp[count] = 1;
                    count = 1;
                    if(mp[count]) return false;
                }
            }
            else if(arr[i] != arr[i-1]){
                if(mp[count]) return false;
                mp[count] = 1;
                count = 1;
            }
            else if(arr[i] == arr[i-1]) count++;
        }
        
        return true;
    }
};
