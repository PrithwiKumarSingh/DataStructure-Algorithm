// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// ( Medium )

#include <vector>
using namespace std;

class Solution {
  public:
  
    bool AllocatePage(int maxPages, vector<int> &arr, int k){
        // give one book to the default fist student, count is a Student & pages are book;
        int count = 1, pages = arr[0];
        for(int i=1; i<arr.size(); i++){
            // allocate second book to first and check then condition. it's true count++ then pages allocate to other student
            pages+=arr[i];
            if(pages>maxPages){
                count++;
                pages = arr[i];
            }
        }
        // why we write this condition? . when [10,20,30,40] & k = 4. it's possible to allocate when not then ease case handle it before move this point
        return count <= k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        // ease case when number of book is less then student. then not possible to allocate where return -1;
        if(n<k) return -1;
        

        // start is maximum of the array & end is sum of all element in a array.
        int start = 0 , end = 0 , ans; 
        for(int i=0; i<n; i++){
            start = max(arr[i],start);
            end += arr[i];
        } 
        
        while(start<=end){
        
        int mid = (start+end) >> 1;
        
        if(AllocatePage(mid, arr, k)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        
    }
    return ans;
    }
};