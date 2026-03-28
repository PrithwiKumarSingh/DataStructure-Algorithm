//  https://www.geeksforgeeks.org/problems/aggressive-cows/1
// ( Medium )

class Solution {
  public:
    bool isPossible(int maxDistance, vector<int> &stalls, int k){
        int count = 1, cowPosition = stalls[0];
        
        for(int i=0; i<stalls.size(); i++){
            if(stalls[i]-cowPosition >= maxDistance){
                count++;
                cowPosition = stalls[i];
            }
        }
        return count >= k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        int start = 1, end, ans;
        sort(stalls.begin(),stalls.end()); 
        
        end = stalls[n-1]-stalls[0];
        
        
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(isPossible(mid, stalls, k)){
                ans = mid;
                start = mid+1; 
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
};