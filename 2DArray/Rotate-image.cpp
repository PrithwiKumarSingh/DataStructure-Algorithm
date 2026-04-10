// https://leetcode.com/problems/rotate-image/description/
// (medium)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Transpose of the array 
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<m; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // swap the colStart to colEnd 
        int colStart = 0, colEnd = matrix[0].size()-1;

        while(colStart < colEnd){
            for(int i=0; i<n; i++){
                swap(matrix[i][colStart], matrix[i][colEnd]);
            }
            colStart++,colEnd--;
        }
        
    }


};