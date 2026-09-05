// Geekforgeeks 
// https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        
        int n = str.size(); 
        int unique = 0;
        bool freq[256] = {0};
        
        // for unique character in a string
        for(int i=0; i<n; i++){
            if(freq[str[i]]==0){
                freq[str[i]] = 1; 
                unique ++;
            }
        };
        
        // sliding window
        
        int start = 0, end = 0, totalUnique = 0, ans = n, count[256] = {0};
        
        while(end < n){
            
            count[str[end]]++;
            
            if(count[str[end]]==1){
                totalUnique++;
            }
            
            while(unique == totalUnique){
                ans = min(ans, end-start+1);
                
                count[str[start]]--;
                
                if(count[str[start]]==0){
                    totalUnique --;
                }
                start++;
            }
            
            end++;
        };
        
        return ans;
        
    };
};