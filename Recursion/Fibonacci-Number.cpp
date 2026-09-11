
//  Eassy - https://leetcode.com/problems/fibonacci-number/description/

class Solution {
public:
    int fib(int n) {
        
        if(n<=1){
            return n;
        }

        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};