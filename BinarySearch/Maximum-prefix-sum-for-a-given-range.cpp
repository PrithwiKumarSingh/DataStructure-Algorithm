// Maximum Prefix Sum for a given range  -> https://www.geeksforgeeks.org/problems/maximum-prefix-sum-for-a-given-range0227/1
// ( Medium )

#include <bits/stdc++.h>
using namespace std;    


// Brute Force Approach Time Complexity: O(N^2)  Space Complexity: O(1)
class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        int n = leftIndex.size();
        
        vector<int> ans;
        
        
        
        
        for(int i=0; i<n; i++){
            
            int prefixSum = 0, maxi = INT_MIN; 
            
            for(int j=leftIndex[i]; j<=rightIndex[i]; j++ ){
                
                prefixSum+=arr[j];
                maxi = max(maxi,prefixSum);
            }
            ans.push_back(maxi);
        }
        
        return ans;
    }
};

