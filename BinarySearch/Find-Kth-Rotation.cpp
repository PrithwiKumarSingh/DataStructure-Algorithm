// https://www.geeksforgeeks.org/problems/rotation4723/1




// Brute Force method 
class Solution {
  public:
    int findKRotation(vector<int> &arr) {

        // Code Here
        int n = arr.size();
        
        int index = 0;
        
        // if(n==1) return 0;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                index= i+1;
                break;
            }
        }
        return index;
        
    }
};




// Binary Search method

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here

        int n = arr.size();
        
        int start=0, end=n-1, index = 0;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(arr[mid] >= arr[0]){
                start = mid+1;
            }else{
                index = mid;
                end = mid-1;
            }
            
        }
        return index;
        
    }
};

//  Other Knowladge

// both are same 

int mid = start + (end-start)/2;

int mid = (start + end) >> 1;  
// right shift -> convert to the binary -> right shift by 1
//    1010 -> 0101 --> Half of the given number using right shift by 1
//    (10) -> (5)

