class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int mat[n][m];
        memset(mat, 0, sizeof(mat));
        int count = 0;
        int r, c;
        
        for(int i = 0; i < (int)indices.size(); i++){
            r = indices[i][0];
            c = indices[i][1];
            
            for(int j = 0; j < m; j++) mat[r][j]++;
            for(int k = 0; k < n; k++) mat[k][c]++;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j]%2) count++;
           }
        }
        
        return count;
    }
};
