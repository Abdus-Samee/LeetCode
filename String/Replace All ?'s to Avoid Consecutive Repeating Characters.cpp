class Solution {
public:
    string modifyString(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '?'){
                if(i == 0){
                    for(char j = 'a';;j++){
                        if(j != s[i+1]){
                            s[i] = j;
                            break;
                        }
                    }
                }else if(i == s.length()-1){
                    for(char j = 'a';;j++){
                        if(j != s[i-1]){
                            s[i] = j;
                            break;
                        }
                    }
                }else{
                   for(char j = 'a';;j++){
                       if((j != s[i-1]) && (j != s[i+1])){
                           s[i] = j;
                           break;
                       }
                   }
                }
            }
        }
        
        return s;
    }
};
