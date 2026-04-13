
https://leetcode.com/problems/to-lower-case/description/
// (eassy)

class Solution {
public:
    string toLowerCase(string s) {
        string arr = "";

        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<= 'Z'){
                s[i] = 'a' + (s[i]-'A');
            }
        }
        return s;
    }
};

// second approach =>  'a'= 97  &  'A' = 65  => 97-65 => 32
class Solution {
public:
    string toLowerCase(string s) {
        string arr = "";

        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<= 'Z'){
                s[i] = s[i]+32;
               
            }
        }
        return s;
        
    }
};