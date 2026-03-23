//   https://leetcode.com/problems/kth-missing-positive-number/description/
//  (Eassy)


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size()-1;
        int ans = arr.size();

        while(start<=end){
            int mid = start + (end - start)/2;

        // right movement
            if(arr[mid]-(mid+1) < k){
                start = mid+1; 
            }
            // left movement
            else{
                ans = mid ;
                end = mid-1;
            }
        }
        return ans + k ; 
        
    }
};