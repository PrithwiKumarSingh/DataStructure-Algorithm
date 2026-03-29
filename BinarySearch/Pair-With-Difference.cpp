//   https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1
// (easy)

#include <stdio.h>
#include <vector>
using namespace std;


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        
        sort(arr.begin(), arr.end());
        int start = 0, end = 1, n = arr.size();
        // if(arr[start]-)
        
        while(start<=end && end < n){
            if(arr[end]-arr[start] == x && start!=end){
                return 1;
            }else if(arr[end]-arr[start] < x){
                end ++ ;
            }else{
                start ++;
            }
            if (start == end) end++;
            
        }
        
        return 0;
    }
};
 