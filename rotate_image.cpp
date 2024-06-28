class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nrows=matrix.size();
        int ncols=matrix[0].size();
      //transpose
        for(int i=0;i<nrows;i++){
            for(int j=i;j<ncols;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
      //reverse rowwise
        for(int i=0;i<nrows;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
