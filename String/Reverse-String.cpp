// https://leetcode.com/problems/reverse-string/description/
// (eassy)


// using Two Pointer approach
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0, end = n-1;

        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};