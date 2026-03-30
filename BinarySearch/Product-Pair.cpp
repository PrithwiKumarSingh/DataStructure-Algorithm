//  https://www.geeksforgeeks.org/problems/equal-to-product3836/1



class Solution {
  public:
    bool isProduct(vector<int> arr, long long target) {
        // code here
        
        sort(arr.begin(), arr.end());
        
        // mid : last index of negative number
        
        int mid = -1, n = arr.size();
        
        for(int i=0; i<n; i++){
            
            if(arr[i]<0){
                mid=i;
            }else{
                break;
            }
        }
        
        
        if(target>=0){
            // Both number should lie in negative region
            int start = 0, end = mid;
            
            while(start<=end){
                if(arr[start] * arr[end] == target){
                    return 1;
                }else if(arr[start] * arr[end] > target){
                    start++;
                    
                }else{
                    end--;
                }
            }
            
            // Both number should lie in positive region
             start = mid+1, end = n-1;
            
            while(start<=end){
                if(arr[start]*arr[end] == target){
                    return 1;
                }else if(arr[start]*arr[end] < target){
                    start++;
                    
                }else{
                    end--;
                }
            
            
            
        }
        }
        else{
            // one should lie in -ve region another in +ve region
            int start = 0, end = mid+1;
            
            while(start<=mid&&end<n){
                
                if(arr[start]*arr[end] == target){
                    return 1;
                }else if(arr[start]*arr[end] > target){
                    end++;
                }else{
                    start++;
                }
            }
            
        }
        
        return 0;
    }
};