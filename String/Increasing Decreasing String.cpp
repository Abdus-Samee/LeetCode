class Solution {
public:
    bool checkAll(int freq[], int sz){
        for(int i = 0; i < sz; i++){
            if(!freq[i]) return false;
        }
        
        return true;
    }
    
    string sortString(string s) {
        string temp = "";
        int len = s.length();
        sort(s.begin(), s.end());
        int freq[len];
        memset(freq, 0, sizeof(freq));
        
        while(true){
            char lastAdded = '*';
            
            for(int i = 0; i < len; i++){
                if((lastAdded != s[i]) && !freq[i]) temp += s[i], lastAdded = s[i], freq[i] = 1;
            }
            lastAdded = '*';
            for(int i = len-1; i >= 0; i--){
                if((lastAdded != s[i]) && !freq[i]) temp += s[i], lastAdded = s[i], freq[i] = 1;
            }
            
            if(checkAll(freq, len)) break;
        }
        
        return temp;
    }
};
