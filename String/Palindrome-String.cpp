// https://www.geeksforgeeks.org/problems/palindrome-string0817/1
// (eassy)




// Two pointer approach
class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        
        int start =0, end = s.size()-1;
        
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }else{
                return 0;
            }
        }
        return 1;
        
        
    }
};