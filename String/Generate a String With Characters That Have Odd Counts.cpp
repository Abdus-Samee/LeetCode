class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        if(n%2){
            for(int i = 1; i <= n; i++){
                s += 'a';
            }
        }else{
            for(int i = 1; i < n; i++){
                s += 'a';
            }
            s += 'b';
        }
        
        return s;
    }
};
