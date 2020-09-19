class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int r = 0;
        int l = 0;
        int len = s.length();
        
        for(int i = 0; i < len; i++){
            if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
            
            if(r == l) count++, r = 0, l = 0;
        }
        
        return count;
    }
};
