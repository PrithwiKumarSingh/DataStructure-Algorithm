//  https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1
//  ( medium )


class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int row = mat.size();
        int col = mat[0].size();
        int rowStart = 0, rowEnd = mat[0].size()-1;
        int colStart = 0, colEnd = mat[0].size()-1;
        
        // row wise reverse 
        while(rowStart<rowEnd){
            for(int i=0; i<row; i++){
                swap(mat[rowStart][i], mat[rowEnd][i]);
            }
            rowStart++, rowEnd--;
        }
        
        // column wise reverse 
        while(colStart<colEnd){
            for(int i=0; i<row; i++){
                swap(mat[i][colStart], mat[i][colEnd]);
            }
            colStart++, colEnd--;
        }
    }
};