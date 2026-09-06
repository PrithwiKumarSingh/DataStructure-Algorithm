
// GFG - https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        
        int n = s.size(); 
        vector<int>LPS(n,0); 
        
        int prefix = 0, suffix = 1; 
        
        while(suffix < n){
            
            if(s[prefix] == s[suffix]){
                LPS[suffix] = prefix + 1; 
                prefix++; 
                suffix++;
            }else{
                if(prefix == 0){
                    suffix ++; 
                }else{
                    prefix = LPS[prefix-1];
                }
            }
        }
        
        return LPS[n-1];
    }
};