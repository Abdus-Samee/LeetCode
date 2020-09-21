class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        
        for(int i = 1; i < n; i++){
            s += 'a';
        }
        
        if(n%2) s += 'b';
        
        return s;
    }
};
