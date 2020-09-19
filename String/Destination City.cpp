class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> m;
        set<string> s;
        string a, b;
        
        for(int i = 0; i < (int)paths.size(); i++){
            a = paths[i][0];
            b = paths[i][1];
            
            s.insert(a);
            s.insert(b);
            
            m[a] = 1;
        }
        
        for (auto itr = s.begin(); itr != s.end(); ++itr){
            if(m[*itr] == 0){
                a = *itr;
                break;
            }
        }
        
        return a;
    }
};
