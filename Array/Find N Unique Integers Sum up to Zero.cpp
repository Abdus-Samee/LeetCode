class Solution {
public:
    vector<int> sumZero(int n) {
        if(n == 1){
            vector<int> v(1, 0);
            return v;
        }
        
        vector<int> v;
        
        int k = 1;
        for(int i = 1; i <= n; i++){
            v.push_back(k);
            if(k > 0) k *= -1;
            else k *= -1, k++;
        }
        
        if(n%2){
            int len = (int)v.size();
            v[len-1] = 0;
        }
        
        return v;
    }
};
