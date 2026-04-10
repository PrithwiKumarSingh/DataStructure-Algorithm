// https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
//  (medium)

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        // Transpose of the array
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<m; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

        // swap of the rowStart to rowEnd
        
        int rowStart = 0, rowEnd = mat[0].size()-1;
        while(rowStart<rowEnd){
            for(int i=0; i<n; i++){
                swap(mat[rowStart][i], mat[rowEnd][i]);
            }
            
            rowStart++, rowEnd--;
        }
        
    
    }
};
