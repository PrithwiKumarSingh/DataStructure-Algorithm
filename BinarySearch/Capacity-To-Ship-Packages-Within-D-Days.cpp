// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

// (Medium)

// same code as Allocate Minimum page problem i'll descibe in Allocate Minimum pages 

class Solution {
public:
    bool isPossibleWeights(int maxWeight, vector<int> arr, int days){
        int count = 1, weights = arr[0];
        for(int i=1; i<arr.size(); i++){
            weights+=arr[i];
            if(weights>maxWeight){
                count++;
                weights = arr[i];
            }
        }
        return count<= days;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        if(n<days) return -1;
        
        int start = weights[0], end = 0, mid = 0, ans = 0; 

        for(int i=0; i<n; i++){
            if(start < weights[i])
                start = weights[i];
            end  += weights[i];
        }

        while(start<=end){
            mid = start + (end-start)/2;

            if(isPossibleWeights(mid, weights, days)){
                ans = mid; 
                end = mid-1; 
            }else{
                start = mid+1;
            }
        }

        return ans;
    }
};