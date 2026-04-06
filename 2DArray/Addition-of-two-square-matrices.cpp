// https://www.geeksforgeeks.org/problems/addition-of-two-square-matrices4916/1
// basic

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        int rowA = matrixA.size();
        int colA = matrixA[0].size();
        
        for(int i=0; i<rowA; i++){
            for(int j=0; j<rowA; j++){
                matrixA[i][j] = matrixA[i][j] + matrixB[i][j];
            }
            
        }
    }
};