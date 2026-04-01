//  https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/
// (easy) 

#include <bits/stdc++.h>
using namespace std;


// Solution 1 (using suffix max array)
class Solution1 {
public:
    int maximumDifference(vector<int>& arr) {

        int n = arr.size();

        vector<int>suffixMax(n, 0);

        suffixMax[n-1] = arr[n-1];
        //         arr = [2, 3, 10, 6, 4, 8, 1]
        //  suffixMax = [0, 0, 0, 0, 0, 0, 1]



        for(int i=n-2; i>=0; i--){
            suffixMax[i] = max(arr[i], suffixMax[i+1]);
        }

        // suffixMax = [10, 10, 10, 8, 8, 8, 1]

        int ans = -1;
        for(int i=0; i<n-1; i++){
            if(arr[i]<suffixMax[i+1]){
                ans = max(ans, suffixMax[i+1]-arr[i]);
            }
        }

        //  arr = [2, 3, 10, 6, 4, 8, 1]
        //  suffixMax = [10, 10, 10, 8, 8, 8, 1]
        //  ans = 8

        return ans;
    }
};

// Solution 2 (using a variable to store the minimum element till now)
class Solution2 {
public:
    int maximumDifference(vector<int>& arr) {

        int n = arr.size();

        int ans = -1; 
        int minimum = arr[0];

        for(int i=1; i<n; i++){
            if(arr[i]>minimum){
                ans = max(ans, arr[i]-minimum);
            }
                minimum = min(minimum,arr[i]);

        }

        
        return ans;
    }
};