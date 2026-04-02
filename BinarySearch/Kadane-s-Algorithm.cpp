// Kadane's Algorithm  -> https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// Maximum Subarray  -> https://www.leetcode.com/problems/maximum-subarray/
// ( Medium )


#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach Time Complexity: O(N^2)  Space Complexity: O(1)

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int ans = INT_MIN; 
        for(int i=0; i<n; i++){
            int sum = 0; 
            for(int j=i; j<n; j++){
                sum += arr[j];
                ans = max(ans,sum);
            }
        }
        
        return ans;
        
    }
};



// Optimal Approach (Kadane's Algorithm) Time Complexity: O(N)  Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int maxSum = INT_MIN, subSum=0;

        for(int i=0; i<n; i++){
            // agar mujhse pahle wala negative hue, main nahi add karunga unke sath

            if(subSum<0){
                subSum = arr[i];
            }
            else{
                // nahi to main us group ka part ban jaunga
                subSum += arr[i];
            }
            maxSum = max(maxSum,subSum);
        }
        
        return maxSum ;
        
    }
}; 