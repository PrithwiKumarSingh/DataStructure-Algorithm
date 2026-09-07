//   https://www.geeksforgeeks.org/problems/search-pattern0205/1
#include <iostream> 
#include <vector>
using namespace std;

class Solution {
  public:
    
    vector<int>find_lps(string pat){
        int n = pat.size();
        vector<int>LPS(n,0);

            int prefix = 0, suffix = 1; 

            while(suffix < n){
                if(pat[prefix]==pat[suffix]){
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
            return LPS;
    }
    
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = pat.size(), m = txt.size();
                vector<int>arr;
                vector<int>LPS = find_lps(pat);

                int prefix = 0, suffix = 0;

                while(suffix < m){
                    if(pat[prefix] == txt[suffix]){
                        suffix++;
                        prefix++;
                    if(prefix==pat.size()){
                                arr.push_back(suffix-prefix);
                        }

                    }else{
                        if(prefix==0){
                            suffix++;
                        }else{
                            prefix = LPS[prefix-1];
                            
                        }
                    }
                }

                return arr;
    }
};