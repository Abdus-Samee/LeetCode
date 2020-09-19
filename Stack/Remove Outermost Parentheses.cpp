class Solution {
public:
    string removeOuterParentheses(string S) {
        int l = S.length();
        int valid = 0;
        bool bound = false;
        string ans = "";
        
        for(int i = 0; i < l; i++){
            if(!bound && (S[i]=='(')) bound = true, valid++;
            else if(bound && (valid==1) && (S[i]==')')) bound = false, valid = false;
            else if((valid!=1) && (S[i]==')')) ans += S[i], valid++;
            else ans += S[i], valid--;
        }
        
        return ans;
    }
};
