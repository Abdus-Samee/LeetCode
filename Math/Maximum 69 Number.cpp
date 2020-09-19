class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        string temp;
        int l = s.length();
        int m = num;
        int t;
        
        for(int i = 0; i < l; i++){
            temp = s;
            temp[i] = (s[i] == '9')? '6' : '9';
            t = stoi(temp);
            m = max(m, t);
        }
        
        return m;
    }
};
