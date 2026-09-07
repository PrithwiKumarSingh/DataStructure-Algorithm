//  https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1


class Solution {
  public:
    int minChar(string &s) {
        
        string temp = s; 

        // reverse the string 
        reverse(temp.begin(), temp.end());
        int n = s.size();
        
        s = s  + temp;
    
        // using KPM / LPS algorithms
        int prefix = 0, suffix = 1; 
        vector<int>LPS(s.size(),0);
        
        while(suffix < s.size()){  
            if(s[prefix] == s[suffix]){
                LPS[suffix] = prefix + 1; 
                prefix++, suffix++;
            }
            else{
                if(prefix == 0){
                    suffix++;
                }else{
                    prefix = LPS[prefix-1];
                }
            }
        }
        

                return n-LPS[s.size()-1];


    }
};
