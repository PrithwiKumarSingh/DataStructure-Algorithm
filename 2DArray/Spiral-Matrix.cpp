// https://leetcode.com/problems/spiral-matrix/description/
// (medium)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int rowStart = 0, colStart = 0, rowEnd = matrix.size()-1, colEnd = matrix[0].size()-1;

        vector<int> spiral;

        while(rowStart<=rowEnd && colStart<=colEnd){
            
            // first row ko print karo
            for(int i=colStart; i<=colEnd; i++){
                spiral.push_back(matrix[rowStart][i]);
            }
            rowStart++;

            // Last Column ko print karo
            for(int i=rowStart; i<=rowEnd; i++){
                spiral.push_back(matrix[i][colEnd]);
            }
            colEnd--;

            // Last row ko reverse order me print karo

            if(rowStart<=rowEnd){
            for(int i=colEnd; i>=colStart; i--){
                spiral.push_back(matrix[rowEnd][i]);
            }
            rowEnd--;
            }

            // first column ko reverse order me print karo
            if(colStart<=colEnd){
            for(int i=rowEnd; i>=rowStart; i--){
                spiral.push_back(matrix[i][colStart]);
            }
            colStart++;
            }
        }

        return spiral;
        
    }
};