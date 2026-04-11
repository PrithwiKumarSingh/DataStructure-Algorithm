//  https://leetcode.com/problems/search-a-2d-matrix/
// (MEDIUM)


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0, end = row * col-1; 
        while(start<=end){
            int mid = (start+end) >> 1; 
            int rowS = mid / col;
            int colS = mid % col;

            if(matrix[rowS][colS] == target){
                return true;
            }else if(matrix[rowS][colS] > target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
        
    }
};