// https://leetcode.com/problems/split-array-largest-sum/description/
// (Hard)

// same as allocate minimum pages question

class Solution {
public:
    bool isSubArrayPossible(int maxSum, vector<int> nums, int k){
        int count = 1, subArray=nums[0];
        for(int i=1; i<nums.size(); i++){
            subArray += nums[i];
            if(subArray>maxSum){
                count++;
                subArray = nums[i];
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int start = nums[0] , end = 0, n = nums.size(), ans;
        if(n<k) return -1;

        for(int i=0; i<n; i++){
            if(start<nums[i])
                start = nums[i];
            end += nums[i];
        }

        while (start<=end){
            int mid = start + (end-start)/2;
            if(isSubArrayPossible(mid, nums, k)){
                ans = mid;
                end = mid-1; 
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};