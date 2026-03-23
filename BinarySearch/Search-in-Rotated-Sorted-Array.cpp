// https://leetcode.com/problems/search-in-rotated-sorted-array/
// Medium


class Solution {
public:
    int search(vector<int>& arr, int target) {

        int n = arr.size();
        int start=0, end=n-1;

        while(start<=end){
            int mid = (start+end) >> 1;

            if(arr[mid] == target){
                return mid;
            }

            // left portion 
            else if(arr[mid]>= arr[0]){
             if(arr[mid]>target && arr[0]<=target){
                end = mid -1;
            }else{
                start = mid+1;
               }
            }
            // right portion
            else{
                if(arr[mid]<target && arr[n-1]>=target){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return  -1;

    }
        
};