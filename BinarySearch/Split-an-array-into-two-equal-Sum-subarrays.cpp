//   https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1
// (easy)

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum += arr[i] ;
        }
        
        if(totalSum%2==1) return false;
        int half = totalSum/2;
        int prefixSum = 0;
        
        for(int i=0; i<n; i++){
            
            if(prefixSum == half){
                return true;
            }else{
                prefixSum += arr[i];
            }
            
            
        }
        return false;
        
    }
};
