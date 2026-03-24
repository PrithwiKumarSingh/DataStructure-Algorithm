// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
// (Hard)

// same code as Allocate Minimum page problem i'll descibe in Allocate Minimum pages 

class Solution {
  public:
  
    bool isPaintinPossible(int maxPaint, vector<int> &arr, int k){
      int count = 1 , paint = arr[0];
      for(int i=1; i<arr.size(); i++){
          paint+=arr[i];
          if(paint>maxPaint){
              count++; 
              paint = arr[i];
          }
          
      }
      return count <= k;
      
  }
    int minTime(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        // ease case 
        if(n<k) return -1;
        
        int start = arr[0], end = 0;
        
        for(int i=0; i<n; i++){
            if(start<arr[i])
                start = arr[i];
            
            end += arr[i];
        }
        
        int ans;
        while(start<=end){
            int mid = start + (end-start)/2; 
            
            if(isPaintinPossible(mid, arr, k)){
                ans = mid; 
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans; 
        
    }
};