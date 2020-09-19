class Solution {
public:
    string toLowerCase(string str) {
        int l = str.length();
        
        for(int i = 0; i < l; i++){
            if((str[i] < 65) || (str[i] > 122) || ((str[i]>90)&&(str[i]<97))) continue;
            if(str[i] <= 90) str[i] += 32;
        }
        
        return str;
    }
};
