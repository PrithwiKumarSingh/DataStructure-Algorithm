
// Trapping Rain Water -> https://leetcode.com/problems/trapping-rain-water/description/
// Trapping Rain Water -> https://www.geeksforgeeks.org/trapping-rain-water/
// ( Hard )

#include <bits/stdc++.h>
using namespace std;


// Solving this problem in three passes Time Complexity: O(N)  Space Complexity: O(N)

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> leftMost(n,0);
        vector<int> rightMost(n,0);

        leftMost[0] = height[0], rightMost[n-1] = height[n-1];


        // Prefix Max  -> fist pass
        for(int i=1; i<n; i++){
            leftMost[i] = max(leftMost[i-1],height[i]);
        }

        // Suffix Max  -> second pass
        for(int i=n-2; i>0; i--){
            rightMost[i] = max(rightMost[i+1],height[i]);
        }

        int totalWater = 0; 

        // Third pass
        for(int i=1; i<n-1; i++){
            int minLeftRight = min(leftMost[i-1], rightMost[i+1]);

            if(minLeftRight > height[i])
            totalWater += minLeftRight-height[i];

        }
    
    return totalWater;
        
    }
};


// Solving this problem in Two pass Time Complexity: O(N)  Space Complexity: O(n)
class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> rightMax(n,0);
        rightMax[n-1] = height[n-1];

        int leftMax = height[0];

        // Suffix Max  
        for(int i=n-2; i>0; i--){
            rightMax[i] = max(rightMax[i+1],height[i]);
        }

        int totalWater = 0; 

        for(int i=1; i<n-1; i++){
            int minLeftRight = min(leftMax, rightMax[i+1]);

            if(minLeftRight > height[i])
            totalWater += minLeftRight-height[i];

            leftMax = max(leftMax, height[i]);
            

        }
    
    return totalWater;
        
    }
};

// Solving this problem in One pass Time Complexity: O(N)  Space Complexity: O(1) 
// Two pointer approach

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        int leftMax = 0, rightMax = 0, totalWater = 0;
        int start = 0, end = n-1;

        while(start<=end){
            if(height[start] > height[end]){
                if(rightMax > height[end]){
                    totalWater += rightMax - height[end];
                }
                rightMax = max(rightMax, height[end]);
                end--;
            }else{
                if(leftMax > height[start]){
                    totalWater += leftMax - height[start];
                }
                leftMax = max(leftMax, height[start]);
                start++;
            }
        }
    
    return totalWater;
        
    }
};