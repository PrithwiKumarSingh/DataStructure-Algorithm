
// https://leetcode.com/problems/3sum-closest/description/

// Time Complexity = O(n^2)
// Space Complexity = O(1)


#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int max_diff = INT_MAX;
        int resultSum = 0; 
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
                
            int left = i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];

                int diff = abs(sum-target);
                
                if(max_diff > diff){
                    max_diff = diff; 
                    resultSum = sum;
                }

                if(sum == target){
                    return resultSum;
                }
                else if(target > sum){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return resultSum;
    }
};