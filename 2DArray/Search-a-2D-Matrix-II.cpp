// https://leetcode.com/problems/search-a-2d-matrix-ii/description/
// (medium)

// TC-> O(n+m)    SC -> O(n) 


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        int rowStart = 0, colEnd = colSize-1, colStart = 0;
        while(0<=colEnd && rowStart < rowSize){
            
            if(matrix[rowStart][colEnd]==target){
                return true;
            }else if(matrix[rowStart][colEnd] < target){
                rowStart++;
            }else{
                colEnd--;
            }
        }


        return false;
    }
};

