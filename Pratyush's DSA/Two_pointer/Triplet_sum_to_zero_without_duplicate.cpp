// https://leetcode.com/problems/3sum/

// Time Complexity = O(n)
// Space Complexity = O(1)


#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>result(3,0);
        vector<vector<int>>finalResult;
        sort(nums.begin(),nums.end());

        int n = nums.size();

        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
                
            int left = i+1;
            int right = n-1;
            int sum = -1 * nums[i];

            while(left<right){
                int s = nums[left]+nums[right];

                if(s==sum){
                    result[0]= nums[i];
                    result[1] = nums[left];
                    result[2] = nums[right];
                    finalResult.push_back(result);

                    right--;
                    left++;

                    while(left<n && nums[left] == nums[left-1])
                        left++;
                    
                    while(right >= 0 && nums[right] == nums[right+1])
                        right--;
                }
                else if(s > sum){
                    right--;
                }else{
                    left++;
                }
            }
        }

        return finalResult;
    }
};