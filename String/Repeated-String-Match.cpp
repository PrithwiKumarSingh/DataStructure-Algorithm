// https://leetcode.com/problems/repeated-string-match/description/

class Solution {
public:
    bool KMP(string haystack, string needle) {
        
        int n = needle.size(), m = haystack.size();
        vector<int>LPS(n,0);

        int prefix = 0, suffix = 1; 

        while(suffix < n){
            if(needle[prefix]==needle[suffix]){
                LPS[suffix] = prefix + 1; 
                suffix ++; 
                prefix ++; 
            }else{
                if(prefix == 0){
                    suffix++;
                }else{
                    prefix = LPS[prefix-1];
                }
            }
        }

        prefix = 0, suffix = 0;

        while(prefix < n && suffix < m){
            if(needle[prefix] == haystack[suffix]){
                suffix++;
                prefix++;
            }else{
                if(prefix==0){
                    suffix++;
                }else{
                    prefix = LPS[prefix-1];
                }
            }
        }

        if(prefix==n){
            return 1;
        }else{
            return 0;
        }
    }

    int repeatedStringMatch(string a, string b) {
        
        string newString = a; 
        int repeat = 1; 

        // string a ke size ko atleat string b ke size equal karo
        while(newString.size() < b.size()){
            newString += a;
            repeat++;
        }

        if(KMP(newString,b)){
            return repeat;
        }

        // ek aur baat repeat kar do
         newString += a; 
         repeat++;

         // again check kar lo
         if(KMP(newString,b)){
            return repeat;
         }

         return -1; 


    }
};