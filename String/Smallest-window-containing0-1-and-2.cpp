// https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        
        int n = s.size();
        int start = 0, end = 0; 
        int zero = 0; 
        int one = 0; 
        int two = 0; 
        int mini  = INT_MAX;
        
        while(end < n){
            
            if(s[end] == '0') zero++;
            if(s[end] == '1') one++;
            if(s[end] == '2') two++;
            
            while(zero > 0 && one > 0 && two > 0){
                mini = min(mini, end - start + 1); 
                
                if(s[start] == '0') zero--;
                if(s[start] == '1') one--;
                if(s[start] == '2') two--;
                
                start++;
            }
            end++;
        }
        
        if(mini == INT_MAX) return -1; 
        
        return mini;
        
    }
};
