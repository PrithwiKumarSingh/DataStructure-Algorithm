/*

299. Equal Sums

You are given an array arr of positive integers. 
Your task is to find the smallest non-negative integer x (greater than or equal to zero) that can be inserted between 
any two elements of the array such that the sum of the elements in the subarray before x is equal to the sum of the elements 
in the subarray after x, with the newly inserted integer x included in either of the two subarrays.

Your output should be a list of three integers:

The smallest non-negative integer x that can be inserted.
The position (1-indexed) where x is inserted.
A flag indicating whether x was added to the first subarray (1) or the second subarray (2).

Example 1:

Input:
arr = [3, 2, 1, 5, 7, 8]

Output:
[4, 5, 1]

*/


#include <bits/stdc++.h>
using namespace std; 


class Solution{
    public:
    vector<int> EqualSum(vector<int>arr){

    int n = arr.size();
    int totalSum = 0; 
    for(int i=0; i<n; i++){
        totalSum+=arr[i];
    }

    vector<int> ans(3);
     ans[0] = INT_MAX;
    int leftSum = 0; 
    int rightSum = 0;
    for(int i=0; i<n-1; i++ ){

        leftSum += arr[i];
        rightSum = totalSum - leftSum;

        if(abs(rightSum-leftSum) > ans[0])
        continue;
    
        if(rightSum>leftSum){
            ans[0] = rightSum - leftSum;
            ans[1] = i+2;
            ans[2] = 1;
        }
        else{
            ans[0] = leftSum - rightSum;
            ans[1] = i+2;
            ans[2] = 2;
        }

    }
    return ans;

}
};


int main(){

    Solution S;

    vector<int> arr = {3, 2, 1, 5, 7, 8};
    
    vector<int> ans = S.EqualSum(arr);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;

    
}