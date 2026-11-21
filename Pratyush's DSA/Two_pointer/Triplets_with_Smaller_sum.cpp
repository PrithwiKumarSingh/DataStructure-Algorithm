// https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1

// Time Complexity = O(n^2)
// Space Complexity = O(1)


#include <iostream> 
#include <vector>
using namespace std;

class Solution {
  public:
    int countTriplets(int target, vector<int>& arr) {
        // code here
        
        sort(arr.begin(), arr.end());
        
        int totalSum = 0; 
        int n = arr.size();
        
        
        for(int i=0; i<n-2; i++){
            int left = i + 1; 
            int right = n-1; 
            
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right]; 
                
                if(sum >= target){
                    right --; 
                }else{
                    totalSum += right - left;
                    left ++;
                }
            }
        }
        
        return totalSum;
    }
};