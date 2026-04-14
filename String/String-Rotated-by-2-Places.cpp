//  https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1
// ( eassy )

class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        int n = s1.size();
        
        bool clockwise = true; 
        
        for(int i=0; i<n; i++){
            if(s1[i] != s2[(i+2)%n]){
                clockwise = false;
                break;
            }
        }
        
        if(clockwise)
            return true;
        
        // anticlockwise 
        
        bool antiClockwise = true;
        
        for(int i=0; i<n; i++){
            if(s2[i] != s1[(i+2)%n]){
                antiClockwise = false;
                break;
            }
        }
        
        if(antiClockwise)
            return true;
            
        return false;
    }
};
