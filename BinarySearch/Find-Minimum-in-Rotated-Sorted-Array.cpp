//  https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
// medium

class Solution {
public:
    int findMin(vector<int>& nums) {

        

        int n = nums.size();

        if(nums[0]<nums[n-1]) 
        return nums[0];
        
        
        int start = 0, end = n-1, minimum= nums[0];

        while(start<=end){
            int mid = (start+end) >> 1;

        // part of left side -> then move right side
            if(nums[mid]>=nums[0]){
                start = mid+1;
                
            }
        // part of right side -> then store the value of num[mid] in minimum and move left side
            else{
                minimum = nums[mid];
                end = mid - 1;
            }
        }
        return minimum;
        
    }
};